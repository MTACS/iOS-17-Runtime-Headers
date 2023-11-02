
@interface NSCloudKitMirroringRequestOptions : NSObject <NSCopying> {
    CKOperationConfiguration * _operationConfiguration;
}

@property (nonatomic) bool allowsCellularAccess;
@property (nonatomic, retain) CKOperationConfiguration *operationConfiguration;
@property (nonatomic) long long qualityOfService;

- (bool)allowsCellularAccess;
- (id)copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)operationConfiguration;
- (long long)qualityOfService;
- (void)setAllowsCellularAccess:(bool)arg1;
- (void)setOperationConfiguration:(id)arg1;
- (void)setQualityOfService:(long long)arg1;

@end
