
@interface SASyncGetCachedSyncAnchors : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *interactionId;

+ (id)getCachedSyncAnchors;
+ (id)getCachedSyncAnchorsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)interactionId;
- (bool)mutatingCommand;
- (bool)requiresResponse;
- (void)setInteractionId:(id)arg1;

@end
