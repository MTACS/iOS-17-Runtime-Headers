
@interface SKUIStateRestorationContext : NSObject {
    SKUIClientContext * _clientContext;
}

@property (nonatomic, retain) SKUIClientContext *clientContext;

+ (void)setSharedContext:(id)arg1;
+ (id)sharedContext;

- (void).cxx_destruct;
- (id)clientContext;
- (void)setClientContext:(id)arg1;

@end
