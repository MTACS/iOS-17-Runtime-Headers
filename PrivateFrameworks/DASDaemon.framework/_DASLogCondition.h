
@interface _DASLogCondition : NSObject {
    NSObject * _condition;
    bool  _isIdeal;
}

@property (nonatomic, retain) NSObject *condition;
@property (nonatomic) bool isIdeal;

+ (id)withCondition:(id)arg1;

- (void).cxx_destruct;
- (id)condition;
- (id)description;
- (bool)isIdeal;
- (void)setCondition:(id)arg1;
- (void)setIsIdeal:(bool)arg1;

@end
