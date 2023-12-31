
@interface IMDInconsistency : NSObject {
    CUTWeakReference * _contextWeakReference;
    unsigned long long  _count;
    NSDate * _firstOccurrence;
}

@property (nonatomic) id context;
@property (nonatomic) unsigned long long count;
@property (readonly) NSDate *firstOccurrence;

- (id)context;
- (unsigned long long)count;
- (id)firstOccurrence;
- (id)init;
- (void)setContext:(id)arg1;
- (void)setCount:(unsigned long long)arg1;
- (bool)shouldJettison:(id*)arg1;

@end
