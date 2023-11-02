
@interface CLHarvester : NSObject {
    NSXPCConnection * _connection;
}

- (void)connect;
- (id)currentStateDictionary;
- (void)dealloc;
- (void)submitSample:(id)arg1;

@end
