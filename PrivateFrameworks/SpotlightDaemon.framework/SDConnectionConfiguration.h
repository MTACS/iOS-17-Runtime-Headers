
@interface SDConnectionConfiguration : NSObject <CSXPCConnectionConfiguration> {
    bool  _allowDocumentUnderstandingEntitledAttributes;
    bool  _allowMail;
    bool  _allowPhotosEntitledAttributes;
    bool  _allowPhotosLibraryDeletion;
    bool  _allowSpotlightEntitledAttributes;
    NSSet * _allowedBundleIDs;
    NSString * _bundleID;
    NSObject<OS_xpc_object> * _connection;
    unsigned int  _egid;
    unsigned int  _euid;
    bool  _internal;
    bool  _isExtension;
    bool  _isPrivate;
    NSString * _personaID;
    int  _pid;
    bool  _privateIndexNonSandboxAllowed;
    NSString * _protectionClass;
    bool  _quotaDisabled;
    bool  _searchInternal;
}

@property (nonatomic, readonly) bool allowDocumentUnderstandingEntitledAttributes;
@property (nonatomic, readonly) bool allowMail;
@property (nonatomic, readonly) bool allowPhotosEntitledAttributes;
@property (nonatomic, readonly) bool allowPhotosLibraryDeletion;
@property (nonatomic, readonly) bool allowSpotlightEntitledAttributes;
@property (nonatomic, readonly) NSSet *allowedBundleIDs;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, retain) NSObject<OS_xpc_object> *connection;
@property (nonatomic, readonly) unsigned int egid;
@property (nonatomic, readonly) unsigned int euid;
@property (nonatomic, readonly) bool internal;
@property (nonatomic, readonly) bool isExtension;
@property (nonatomic, readonly) bool isPrivate;
@property (nonatomic, readonly) NSString *personaID;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) bool privateIndexNonSandboxAllowed;
@property (nonatomic, readonly) NSString *protectionClass;
@property (nonatomic, readonly) bool quotaDisabled;
@property (nonatomic, readonly) bool searchInternal;

- (void).cxx_destruct;
- (bool)allowDocumentUnderstandingEntitledAttributes;
- (bool)allowMail;
- (bool)allowPhotosEntitledAttributes;
- (bool)allowPhotosLibraryDeletion;
- (bool)allowSpotlightEntitledAttributes;
- (id)allowedBundleIDs;
- (id)bundleID;
- (id)connection;
- (unsigned int)egid;
- (unsigned int)euid;
- (id)initWithConnection:(id)arg1 isPrivate:(bool)arg2;
- (bool)internal;
- (bool)isExtension;
- (bool)isPrivate;
- (id)personaID;
- (int)pid;
- (bool)privateIndexNonSandboxAllowed;
- (id)protectionClass;
- (bool)quotaDisabled;
- (bool)searchInternal;
- (void)setConnection:(id)arg1;

@end
