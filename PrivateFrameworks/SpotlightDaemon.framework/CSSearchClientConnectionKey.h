
@interface CSSearchClientConnectionKey : NSObject <NSCopying> {
    NSObject<OS_xpc_object> * _connection;
}

@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;

+ (id)keyWithConnection:(id)arg1;

- (void).cxx_destruct;
- (id)connection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithConnection:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
