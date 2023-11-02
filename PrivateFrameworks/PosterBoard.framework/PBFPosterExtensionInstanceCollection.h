
@interface PBFPosterExtensionInstanceCollection : NSObject <BSInvalidatable, PBFExtensionInstanceProviding> {
    <PRPosterExtensionProvider> * _extensionProvider;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _lock_extensionIdentifierToReasonToInstance;
    NSMutableDictionary * _lock_extensionIdentifierToReasons;
    NSString * _reasonPreamble;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PRPosterExtensionProvider> *extensionProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *reasonPreamble;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_lock_invalidateInstanceForExtensionIdentifier:(id)arg1 reason:(id)arg2;
- (id)acquireExtensionInstance:(id)arg1 reason:(id)arg2 error:(out id*)arg3;
- (id)extensionProvider;
- (id)initWithExtensionProvider:(id)arg1;
- (id)initWithExtensionProvider:(id)arg1 reasonPreamble:(id)arg2;
- (void)invalidate;
- (id)reasonPreamble;
- (void)relinquishExtensionInstance:(id)arg1 reason:(id)arg2;

@end
