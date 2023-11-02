
@interface IXAppRemovabilityMetadata : NSObject <NSCopying> {
    unsigned long long  _client;
    unsigned long long  _removability;
}

@property (nonatomic, readonly) unsigned long long client;
@property (nonatomic, readonly) unsigned long long removability;

- (unsigned long long)client;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithMetadataDictionary:(id)arg1;
- (id)initWithRemovability:(unsigned long long)arg1 client:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)removability;

@end
