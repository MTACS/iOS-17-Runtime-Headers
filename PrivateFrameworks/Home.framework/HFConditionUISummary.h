
@interface HFConditionUISummary : NSObject {
    HFCondition * _condition;
    NSString * _conditionDescription;
    NSString * _conditionTitle;
}

@property (nonatomic, readonly) HFCondition *condition;
@property (nonatomic, readonly) NSString *conditionDescription;
@property (nonatomic, readonly) NSString *conditionTitle;

- (void).cxx_destruct;
- (id)condition;
- (id)conditionDescription;
- (id)conditionTitle;
- (id)initWithCondition:(id)arg1 title:(id)arg2 description:(id)arg3;

@end
