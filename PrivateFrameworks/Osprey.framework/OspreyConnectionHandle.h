
@interface OspreyConnectionHandle : NSObject {
    id  _connectionKey;
    id /* block */  _willRelease;
}

@property (nonatomic, readonly) id connectionKey;

- (void).cxx_destruct;
- (id)connectionKey;
- (void)dealloc;
- (id)initWithConnectionKey:(id)arg1 willRelease:(id /* block */)arg2;

@end
