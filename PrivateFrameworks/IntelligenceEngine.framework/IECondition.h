
@interface IECondition : NSObject {
    NSArray * _children;
    NSString * _conditionId;
    NSString * _expression;
    bool  _value;
}

@property (nonatomic, retain) NSArray *children;
@property (nonatomic, retain) NSString *conditionId;
@property (nonatomic, retain) NSString *expression;
@property (nonatomic) bool value;

- (void).cxx_destruct;
- (id)children;
- (id)conditionId;
- (id)expression;
- (void)setChildren:(id)arg1;
- (void)setConditionId:(id)arg1;
- (void)setExpression:(id)arg1;
- (void)setValue:(bool)arg1;
- (bool)value;

@end
