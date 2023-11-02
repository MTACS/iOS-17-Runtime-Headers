
@interface AAFFuture : NSObject {
    NSDate * _beginDate;
    double  _maxWait;
    bool  _resolved;
    NSCondition * _valueCondition;
    id  _valueObj;
}

@property (nonatomic, retain) NSDate *beginDate;
@property (nonatomic) double maxWait;
@property (nonatomic) bool resolved;
@property (nonatomic, retain) NSCondition *valueCondition;
@property (nonatomic, retain) id valueObj;

- (void).cxx_destruct;
- (id)beginDate;
- (id)init;
- (id)initWithMaxWait:(double)arg1 description:(id)arg2;
- (double)maxWait;
- (bool)resolved;
- (void)setBeginDate:(id)arg1;
- (void)setMaxWait:(double)arg1;
- (void)setResolved:(bool)arg1;
- (void)setValue:(id)arg1;
- (void)setValueCondition:(id)arg1;
- (void)setValueObj:(id)arg1;
- (id)value;
- (id)valueCondition;
- (id)valueObj;

@end
