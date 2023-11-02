
@interface PLPrefetchResourceIdentifier : NSObject <NSCopying> {
    NSString * _assetUuid;
    unsigned long long  _cplType;
    unsigned int  _version;
}

@property (nonatomic, readonly) NSString *assetUuid;
@property (nonatomic, readonly) unsigned long long cplType;
@property (nonatomic, readonly) unsigned int version;

+ (id)resourceDescriptionWithAssetUuid:(id)arg1 resourceVersion:(unsigned int)arg2 cplType:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)assetUuid;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)cplType;
- (id)description;
- (unsigned long long)hash;
- (id)initWithAssetUuid:(id)arg1 version:(unsigned int)arg2 cplType:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned int)version;

@end
