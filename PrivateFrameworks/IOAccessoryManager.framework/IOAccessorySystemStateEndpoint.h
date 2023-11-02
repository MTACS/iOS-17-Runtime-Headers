
@interface IOAccessorySystemStateEndpoint : NSObject {
    unsigned int  _connection;
    unsigned int  _service;
}

@property (nonatomic, readonly) unsigned int connection;
@property (nonatomic, readonly) unsigned int service;

- (unsigned int)connection;
- (void)dealloc;
- (id)initWithService:(unsigned int)arg1;
- (void)notifyUserActive:(bool)arg1;
- (void)notifyUserPresent:(bool)arg1;
- (unsigned int)service;

@end
