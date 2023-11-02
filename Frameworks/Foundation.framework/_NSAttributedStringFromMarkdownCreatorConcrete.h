
@interface _NSAttributedStringFromMarkdownCreatorConcrete : NSObject <_NSAttributedStringFromMarkdownCreator> {
    NSMutableAttributedString * _result;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)appendString:(id)arg1;
- (void)appendString:(id)arg1 with:(id)arg2;
- (void)dealloc;
- (void)finalizeWithLanguageIdentifier:(id)arg1;
- (id)init;
- (unsigned short)lastCharacter;
- (id)parseExtendedAttributesFromData:(id)arg1 error:(id*)arg2;
- (id)result;

@end
