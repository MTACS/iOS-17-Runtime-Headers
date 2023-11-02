
@interface IPAppCustomContactNameContent : IPItemMessage {
    NSString * _vocabularyIdentifier;
    NSString * _vocabularyString;
}

@property (nonatomic, readonly) NSString *vocabularyIdentifier;
@property (nonatomic, readonly) NSString *vocabularyString;

+ (unsigned short)contentMessageIdentifierForItemIdentifier:(unsigned short)arg1;
+ (id)descriptionForTypeIdentifier:(unsigned short)arg1;
+ (unsigned short)itemIdentifier;
+ (unsigned short)messageIdentifier;
+ (unsigned short)metaContentMessageIdentifierForItemIdentifier:(unsigned short)arg1;

- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)arg1;
- (id)initWithVocabularyString:(id)arg1 vocabularyIdentifier:(id)arg2 error:(id*)arg3;
- (bool)initializeFieldValuesFromData:(id)arg1 error:(id*)arg2;
- (id)vocabularyIdentifier;
- (id)vocabularyString;

@end
