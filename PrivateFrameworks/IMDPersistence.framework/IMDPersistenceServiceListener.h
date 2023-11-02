
@interface IMDPersistenceServiceListener : NSObject {
    __IMDPersistenceServiceListenerImpl * _impl;
}

@property (nonatomic, retain) __IMDPersistenceServiceListenerImpl *impl;

- (void).cxx_destruct;
- (id)impl;
- (id)init;
- (void)resume;
- (void)setImpl:(id)arg1;

@end
