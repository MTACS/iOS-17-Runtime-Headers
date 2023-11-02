
@interface SUUIStateRestorationContext : NSObject {
    SUUIClientContext * _clientContext;
}

@property (nonatomic, retain) SUUIClientContext *clientContext;

+ (void)setSharedContext:(id)arg1;
+ (id)sharedContext;

- (void).cxx_destruct;
- (id)clientContext;
- (void)setClientContext:(id)arg1;

@end
