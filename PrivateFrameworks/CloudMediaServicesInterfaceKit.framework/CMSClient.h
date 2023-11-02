
@interface CMSClient : NSObject <NSCopying> {
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) NSXPCConnection *connection;

+ (id)clientWithConnection:(id)arg1;

- (void).cxx_destruct;
- (id)connection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)setConnection:(id)arg1;

@end
