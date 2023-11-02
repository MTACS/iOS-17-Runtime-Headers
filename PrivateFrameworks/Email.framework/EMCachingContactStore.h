
@interface EMCachingContactStore : NSObject {
    CNContactStore * _cnStore;
    EFLazyCache * _displayNameCache;
}

@property (nonatomic, readonly) CNContactStore *cnStore;
@property (nonatomic, retain) EFLazyCache *displayNameCache;

- (void).cxx_destruct;
- (id)_fetchDisplayNameForEmailAddress:(id)arg1 abbreviated:(bool)arg2;
- (void)_invalidateDisplayNameCache;
- (id)cnStore;
- (id)displayNameCache;
- (id)displayNameForEmailAddress:(id)arg1;
- (id)displayNameForEmailAddress:(id)arg1 abbreviated:(bool)arg2;
- (id)init;
- (id)initWithStore:(id)arg1;
- (void)setDisplayNameCache:(id)arg1;

@end
