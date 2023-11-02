
@interface WFLinkDynamicOptionSubstitutableState : WFVariableSubstitutableParameterState {
    WFImage * _image;
    NSString * _localizedSubtitle;
    NSString * _localizedTitle;
}

@property (nonatomic, readonly) WFImage *image;
@property (nonatomic, readonly, copy) NSString *localizedSubtitle;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (nonatomic, readonly) bool valueNeedsDisplayRepresentation;

+ (Class)processingValueClass;
+ (id)serializedRepresentationFromValue:(id)arg1;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
+ (id)valueFromSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 bundleIdentifier:(id)arg4;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)image;
- (id)initWithValue:(id)arg1 localizedTitle:(id)arg2 localizedSubtitle:(id)arg3 image:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (bool)stateIsEquivalent:(id)arg1;
- (bool)valueNeedsDisplayRepresentation;

@end
