
@interface CKDDownloadAssetURLInfo : NSObject {
    CKAsset * _asset;
    struct _OpaquePCSShareProtection { } * _recordPCS;
}

@property (nonatomic, retain) CKAsset *asset;
@property (nonatomic) struct _OpaquePCSShareProtection { }*recordPCS;

- (void).cxx_destruct;
- (id)asset;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (struct _OpaquePCSShareProtection { }*)recordPCS;
- (void)setAsset:(id)arg1;
- (void)setRecordPCS:(struct _OpaquePCSShareProtection { }*)arg1;

@end
