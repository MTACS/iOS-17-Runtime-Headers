
@interface OspreyServiceConfiguration : NSObject {
    OspreyConnectionPool * _connectionPool;
}

@property (readonly) OspreyConnectionPool *connectionPool;

+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (id)connectionPool;
- (id)init;

@end
