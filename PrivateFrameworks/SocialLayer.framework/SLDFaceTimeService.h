
@interface SLDFaceTimeService : NSObject <SLDFaceTimeServiceProtocol, SLDService>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)remoteObjectProtocol;
+ (id)sharedService;

- (id)_applicationIdentifierForConnection:(id)arg1;
- (id)_bundleIdentifierForConnection:(id)arg1;
- (id)init;
- (void)initiateTUConversationForAttributionIdentifier:(id)arg1 videoEnabled:(bool)arg2 completion:(id /* block */)arg3;
- (void)refreshShareableContentMetadataInJoinedConversation;

@end
