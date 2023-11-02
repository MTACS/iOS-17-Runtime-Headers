
@interface BSMutableServiceInterface : BSServiceInterface

@property (nonatomic, copy) BSObjCProtocol *client;
@property (nonatomic) long long clientMessagingExpectation;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) BSObjCProtocol *server;

+ (id)interfaceWithIdentifier:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setClient:(id)arg1;
- (void)setClientMessagingExpectation:(long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setServer:(id)arg1;

@end
