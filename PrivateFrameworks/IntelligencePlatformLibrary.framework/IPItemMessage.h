
@interface IPItemMessage : NSObject <NSCopying> {
    NSData * _innerData;
}

@property (nonatomic, readonly) NSData *innerData;

+ (unsigned short)contentMessageIdentifierForItemIdentifier:(unsigned short)arg1;
+ (id)descriptionForTypeIdentifier:(unsigned short)arg1;
+ (unsigned short)itemIdentifier;
+ (id)itemMessageForMessageIdentifier:(unsigned short)arg1 data:(id)arg2 error:(id*)arg3;
+ (unsigned short)messageIdentifier;
+ (unsigned short)metaContentMessageIdentifierForItemIdentifier:(unsigned short)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (void)enumerateFieldsUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (bool)initializeFieldValuesFromData:(id)arg1 error:(id*)arg2;
- (id)innerData;
- (bool)isEqual:(id)arg1;
- (id)jsonDict;
- (bool)recursivelyEnumerateFieldsWithError:(id*)arg1 forParentField:(id)arg2 isRepeatedSubMessage:(bool)arg3 repeatedSubMessageIndex:(unsigned int)arg4 usingBlock:(id /* block */)arg5;
- (bool)recursivelyEnumerateFieldsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;

@end
