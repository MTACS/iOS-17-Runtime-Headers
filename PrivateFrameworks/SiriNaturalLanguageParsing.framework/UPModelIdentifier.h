
@interface UPModelIdentifier : NSObject <NSCopying> {
    NSString * _appBundleId;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *appBundleId;
@property (readonly, copy) NSUUID *uuid;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithAppBundleId:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)uuid;

@end
