
@interface SACancelRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic) long long clientCancellationCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)cancelRequest;
+ (id)cancelRequestWithDictionary:(id)arg1 context:(id)arg2;

- (long long)clientCancellationCode;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setClientCancellationCode:(long long)arg1;

@end
