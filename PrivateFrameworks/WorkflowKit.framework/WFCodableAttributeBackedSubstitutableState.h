
@interface WFCodableAttributeBackedSubstitutableState : WFVariableSubstitutableParameterState {
    INCodableAttribute * _codableAttribute;
    NSString * _readableSubtitle;
    NSString * _readableTitle;
    INStringLocalizer * _stringLocalizer;
}

@property (nonatomic, readonly) INCodableAttribute *codableAttribute;
@property (nonatomic, copy) NSString *readableSubtitle;
@property (nonatomic, copy) NSString *readableTitle;
@property (nonatomic, readonly) INStringLocalizer *stringLocalizer;

+ (id)processingValueClasses;

- (void).cxx_destruct;
- (id)codableAttribute;
- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)initWithValue:(id)arg1 codableAttribute:(id)arg2 stringLocalizer:(id)arg3;
- (void)processWithContext:(id)arg1 userInputRequiredHandler:(id /* block */)arg2 valueHandler:(id /* block */)arg3;
- (id)readableSubtitle;
- (id)readableTitle;
- (void)resizeDisplayImageIfNecessary:(id)arg1;
- (id)serializedRepresentation;
- (void)setReadableSubtitle:(id)arg1;
- (void)setReadableTitle:(id)arg1;
- (id)stringLocalizer;

@end
