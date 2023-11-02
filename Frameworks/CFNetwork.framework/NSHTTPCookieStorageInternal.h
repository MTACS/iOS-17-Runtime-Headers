
@interface NSHTTPCookieStorageInternal : NSObject {
    NSRecursiveLock * dataLock;
    bool  privateBrowsing;
    struct OpaqueCFHTTPCookieStorage { } * privateStorage;
    struct OpaqueCFHTTPCookieStorage { } * storage;
}

- (void)_syncCookies;
- (void)dealloc;
- (void)registerForPostingNotificationsWithContext:(id)arg1;

@end
