
@interface MUWebBridgeConfiguration : NSObject <NSCopying> {
    NSString * _bridgeVersion;
    NSString * _nativeControllerName;
    NSString * _webControllerName;
}

@property (nonatomic, readonly, copy) NSString *bridgeVersion;
@property (nonatomic, readonly, copy) NSString *nativeControllerName;
@property (nonatomic, readonly, copy) NSString *webControllerName;

- (void).cxx_destruct;
- (id)bridgeVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithNativeControllerName:(id)arg1 webControllerName:(id)arg2 bridgeVersion:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)nativeControllerName;
- (id)webControllerName;

@end
