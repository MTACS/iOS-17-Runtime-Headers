
@interface AMSUniversalLinks : NSObject {
    AMSUniversalLinksConnection * _connection;
}

@property (nonatomic, retain) AMSUniversalLinksConnection *connection;

+ (id)_connection;
+ (id)_privateQueue;
+ (void)update;

- (void).cxx_destruct;
- (id)connection;
- (id)init;
- (void)setConnection:(id)arg1;
- (id)updateUniversalLinks;

@end
