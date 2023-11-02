
@interface _UIEventSessionAccumulator : NSObject {
    NSDictionary * _allowedActionSourceTypes;
    id /* block */  _block;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _depthRange;
    NSString * _name;
    NSMutableOrderedSet * _recentActions;
    long long  _sequenceNumber;
}

@property (nonatomic, readonly) NSDictionary *allowedActionSourceTypes;
@property (nonatomic, readonly) id /* block */ block;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } depthRange;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic) long long sequenceNumber;

+ (id)accumulatorWithName:(id)arg1 depthRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 block:(id /* block */)arg3 allowedActionSourceTypes:(id)arg4;

- (void).cxx_destruct;
- (id)allowedActionSourceTypes;
- (id /* block */)block;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })depthRange;
- (void)enumerateAnalytics:(id /* block */)arg1;
- (void)flushAccumulator;
- (void)increaseWithAction:(id)arg1;
- (bool)isActionAllowed:(id)arg1;
- (id)name;
- (void)performIncreaseWithActions:(id)arg1;
- (void)reset;
- (long long)sequenceNumber;
- (void)setSequenceNumber:(long long)arg1;

@end
