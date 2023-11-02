
@interface HMDEventCounter : NSObject {
    unsigned long long  _count;
    NSArray * _observers;
}

@property unsigned long long count;
@property (retain) NSArray *observers;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)init;
- (id)initWithCount:(unsigned long long)arg1;
- (id)observers;
- (void)setCount:(unsigned long long)arg1;
- (void)setObservers:(id)arg1;

@end
