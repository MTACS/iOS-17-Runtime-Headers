
@interface WFPropertyVariableAggrandizement : WFVariableAggrandizement

@property (nonatomic, readonly) bool negativeProperty;
@property (nonatomic, readonly) NSString *negativePropertyName;
@property (nonatomic, readonly) NSString *propertyName;
@property (nonatomic, readonly) <WFPropertyListObject> *propertyUserInfo;

- (void)applyToContentCollection:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithDictionary:(id)arg1;
- (id)initWithPropertyName:(id)arg1 propertyUserInfo:(id)arg2;
- (id)initWithPropertyName:(id)arg1 propertyUserInfo:(id)arg2 negativeProperty:(bool)arg3 negativePropertyName:(id)arg4;
- (bool)negativeProperty;
- (id)negativePropertyName;
- (id)processedContentClasses:(id)arg1;
- (id)propertyName;
- (id)propertyUserInfo;

@end
