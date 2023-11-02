
@interface BSServiceInterface : NSObject <BSDescriptionProviding, NSCopying, NSMutableCopying> {
    BSObjCProtocol * _client;
    struct __CFBoolean { } * _clientWaitsForActivation;
    NSString * _identifier;
    BSObjCProtocol * _server;
}

@property (nonatomic, readonly, copy) BSObjCProtocol *client;
@property (nonatomic, readonly) long long clientMessagingExpectation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) BSObjCProtocol *server;
@property (readonly) Class superclass;

+ (id)interfaceWithServer:(id)arg1 client:(id)arg2;

- (void).cxx_destruct;
- (id)client;
- (long long)clientMessagingExpectation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)server;
- (void)setIdentifier:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
