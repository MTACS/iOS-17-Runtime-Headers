
@interface SSUIServiceOptionsAssetMetadata : NSObject <BSXPCSecureCoding, NSCopying> {
    NSArray * _assetDescription;
}

@property (nonatomic, copy) NSArray *assetDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)assetDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)setAssetDescription:(id)arg1;

@end
