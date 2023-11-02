
@interface WFOSAScriptEditorParameter : WFParameter {
    <WFOSAScriptEditorParameterDelegate> * _delegate;
    NSString * _languageName;
}

@property (nonatomic) <WFOSAScriptEditorParameterDelegate> *delegate;
@property (nonatomic, readonly) NSString *languageName;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithDefinition:(id)arg1;
- (id)languageName;
- (void)setDelegate:(id)arg1;
- (Class)singleStateClass;

@end
