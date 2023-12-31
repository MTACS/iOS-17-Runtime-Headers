
@interface SAHLGetActiveWorkoutApplicationIdentifierResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *appBundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)getActiveWorkoutApplicationIdentifierResponse;
+ (id)getActiveWorkoutApplicationIdentifierResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)appBundleId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setAppBundleId:(id)arg1;

@end
