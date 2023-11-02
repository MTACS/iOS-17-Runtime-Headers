
@interface SAStartUIRequest : SABaseClientBoundCommand <SAClientBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSArray *callbacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (nonatomic, retain) SAStartLocalRequest *startLocalRequest;
@property (nonatomic, retain) SAStartRequest *startRequest;
@property (readonly) Class superclass;

+ (id)startUIRequest;
+ (id)startUIRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setStartLocalRequest:(id)arg1;
- (void)setStartRequest:(id)arg1;
- (id)startLocalRequest;
- (id)startRequest;

@end
