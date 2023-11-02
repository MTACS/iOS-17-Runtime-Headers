
@interface IPAppCustomContactNameMetaContent : IPItemMessage <IPItemMetaContentMessage> {
    NSString * _sourceIdentifier;
}

@property (nonatomic, readonly) NSString *sourceIdentifier;

+ (id)descriptionForTypeIdentifier:(unsigned short)arg1;
+ (unsigned short)itemIdentifier;
+ (unsigned short)messageIdentifier;

- (void).cxx_destruct;
- (void)enumerateFieldsUsingBlock:(id /* block */)arg1;
- (id)initWithSourceIdentifier:(id)arg1 error:(id*)arg2;
- (bool)initializeFieldValuesFromData:(id)arg1 error:(id*)arg2;
- (id)sourceIdentifier;

@end
