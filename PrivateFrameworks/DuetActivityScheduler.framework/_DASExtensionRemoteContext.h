
@interface _DASExtensionRemoteContext : NSExtensionContext <_DASRemoteExtensionContextProtocol> {
    NSObject<OS_os_log> * _log;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) _DASExtension *extension;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)extensionRunnerClassAllowList;

- (void).cxx_destruct;
- (id)createExtensionRunnerWithClassName:(id)arg1;
- (id)extension;
- (id)hostContextWithError:(id*)arg1;
- (id)init;
- (id)log;
- (void)performActivity:(id)arg1;
- (void)setLog:(id)arg1;
- (void)suspend;

@end
