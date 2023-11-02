
@interface AKFuture : NSObject {
    NSDate * _beginDate;
    NSMutableArray * _internalWrapper;
    double  _maxWait;
    bool  _resolved;
    NSCondition * _valueCondition;
}

@property (nonatomic, retain) NSDate *beginDate;
@property (nonatomic, retain) NSMutableArray *internalWrapper;
@property (nonatomic) double maxWait;
@property (nonatomic) bool resolved;
@property (nonatomic, retain) NSCondition *valueCondition;

- (void).cxx_destruct;
- (id)beginDate;
- (id)init;
- (id)initWithMaxWait:(double)arg1 description:(id)arg2;
- (id)internalWrapper;
- (double)maxWait;
- (bool)resolved;
- (void)setBeginDate:(id)arg1;
- (void)setInternalWrapper:(id)arg1;
- (void)setMaxWait:(double)arg1;
- (void)setResolved:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setValueCondition:(id)arg1;
- (id)value;
- (id)valueCondition;

@end
