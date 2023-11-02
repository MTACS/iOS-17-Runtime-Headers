
@interface CDMShortcutPhrase : NSObject {
    NSString * _baseTemplateString;
    NSString * _semanticValue;
}

@property (nonatomic, readonly) NSString *baseTemplateString;
@property (nonatomic, readonly) NSString *semanticValue;

- (void).cxx_destruct;
- (id)baseTemplateString;
- (id)initWithSemanticValue:(id)arg1;
- (id)initWithSemanticValue:(id)arg1 baseTemplateString:(id)arg2;
- (id)semanticValue;

@end
