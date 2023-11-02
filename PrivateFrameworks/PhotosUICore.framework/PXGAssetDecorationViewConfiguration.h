
@interface PXGAssetDecorationViewConfiguration : NSObject <NSCopying, PXGViewUserData> {
    PXOperationStatus * _loadStatus;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) PXOperationStatus *loadStatus;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)loadStatus;
- (void)setLoadStatus:(id)arg1;

@end
