
@interface FPDAccessControlServicer : NSObject <FPDAccessControlServicing> {
    FPDAccessControlStore * _accessStore;
}

@property (nonatomic) FPDAccessControlStore *accessStore;

- (void).cxx_destruct;
- (id)accessStore;
- (void)bundleIdentifiersWithAccessToAnyItemCompletionHandler:(id /* block */)arg1;
- (id)initWithAccessStore:(id)arg1;
- (void)revokeAccessToAllItemsForBundle:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setAccessStore:(id)arg1;

@end
