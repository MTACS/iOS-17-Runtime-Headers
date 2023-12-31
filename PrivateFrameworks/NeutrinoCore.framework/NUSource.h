
@interface NUSource : NSObject <NUIdentifiable> {
    NSString * _assetIdentifier;
}

@property (nonatomic, copy) NSString *assetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NUIdentifier *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSource:(id)arg1;
- (void)setAssetIdentifier:(id)arg1;
- (id)sourceDefinition:(out id*)arg1;

@end
