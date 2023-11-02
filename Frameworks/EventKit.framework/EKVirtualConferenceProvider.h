
@interface EKVirtualConferenceProvider : NSObject <NSExtensionRequestHandling>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)beginRequestWithExtensionContext:(id)arg1;
- (void)extendExpirationOfURL:(id)arg1 toExpirationDate:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)fetchAvailableRoomTypesWithCompletionHandler:(id /* block */)arg1;
- (void)fetchVirtualConferenceForIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)invalidateURL:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)isURLValid:(id)arg1 withCompletion:(id /* block */)arg2;

@end
