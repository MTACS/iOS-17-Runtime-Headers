
@interface _RWIDriverInterfaceInfo : NSObject {
    RWIDriverConfiguration * _configuration;
    _RWIRelayClientConnection * _connection;
    NSSet * _sessionIdentifiers;
    RWIDriverState * _state;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) _RWIRelayClientConnection *connection;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSSet *sessionIdentifiers;
@property (nonatomic, readonly, copy) NSString *version;

- (void).cxx_destruct;
- (id)connection;
- (id)dictionaryRepresentation;
- (id)identifier;
- (id)initWithConfiguration:(id)arg1 connection:(id)arg2;
- (bool)isActive;
- (id)name;
- (id)sessionIdentifiers;
- (void)updateDriverState:(id)arg1;
- (id)version;

@end
