
@interface _MDIndexExtension : NSObject {
    NSString * _containerID;
    NSString * _containerPath;
    bool  _entitlementVerified;
    NSExtension * _extension;
    NSString * _extensionID;
    NSString * _extensionLabel;
    NSSet * _identifiers;
    NSObject<OS_dispatch_queue> * _queue;
    NSSet * _supportedFileTypes;
}

@property (nonatomic, retain) NSString *containerID;
@property (nonatomic, retain) NSString *containerPath;
@property (readonly) bool dontRunDuringMigration;
@property (nonatomic) bool entitlementVerified;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) NSString *extensionID;
@property (readonly) NSString *extensionLabel;
@property (copy) NSSet *identifiers;
@property (readonly) NSDictionary *infoDictionary;
@property (readonly) bool isEnabled;
@property (readonly) bool isInternal;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (copy) NSSet *supportedFileTypes;

- (void).cxx_destruct;
- (void)_performJob:(id)arg1 completionBlock:(id /* block */)arg2;
- (bool)_verifyIntegrityWithHostContext:(id)arg1;
- (id)containerID;
- (id)containerPath;
- (id)description;
- (bool)dontRunDuringMigration;
- (bool)entitlementVerified;
- (id)extension;
- (id)extensionID;
- (id)extensionLabel;
- (id)identifiers;
- (id)infoDictionary;
- (id)initWithExtension:(id)arg1 queue:(id)arg2 containerPath:(id)arg3 containerID:(id)arg4;
- (id)initWithExtension:(id)arg1 queue:(id)arg2 containerPath:(id)arg3 containerID:(id)arg4 supportedFileTypes:(id)arg5 extensionLabel:(id)arg6;
- (bool)isEnabled;
- (bool)isInternal;
- (void)performJob:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)queue;
- (void)setContainerID:(id)arg1;
- (void)setContainerPath:(id)arg1;
- (void)setEntitlementVerified:(bool)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionID:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSupportedFileTypes:(id)arg1;
- (id)supportedFileTypes;

@end
