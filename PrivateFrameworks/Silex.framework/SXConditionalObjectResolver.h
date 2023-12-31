
@interface SXConditionalObjectResolver : NSObject {
    <SXConditionValidating> * _conditionValidator;
    SXJSONObjectMerger * _objectMerger;
}

@property (nonatomic, readonly) <SXConditionValidating> *conditionValidator;
@property (nonatomic, readonly) SXJSONObjectMerger *objectMerger;

- (void).cxx_destruct;
- (id)conditionValidator;
- (id)initWithConditionValidator:(id)arg1 objectMerger:(id)arg2;
- (id)objectMerger;
- (id)resolveObjects:(id)arg1 context:(id)arg2;

@end
