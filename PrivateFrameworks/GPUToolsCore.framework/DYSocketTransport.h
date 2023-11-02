
@interface DYSocketTransport : DYBaseSocketTransport {
    int  _socket;
}

- (id)connect;
- (id)init;
- (id)initWithSocketDescriptor:(int)arg1;

@end
