
@interface MFFakeMailboxUid : MFMailboxUid {
    NSString * _displayName;
    NSString * _fakeFullPath;
    bool  _fakeIsSpecialMailboxUid;
    NSString * _fakeURLString;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, copy) NSString *fakeFullPath;
@property (nonatomic) bool fakeIsSpecialMailboxUid;
@property (nonatomic, copy) NSString *fakeURLString;

- (void).cxx_destruct;
- (id)URLString;
- (id)displayName;
- (id)fakeFullPath;
- (bool)fakeIsSpecialMailboxUid;
- (id)fakeURLString;
- (id)fullPath;
- (id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3;
- (id)initWithAccount:(id)arg1 URLString:(id)arg2 fullPath:(id)arg3 isSpecial:(bool)arg4;
- (bool)isSpecialMailboxUid;
- (bool)isStore;
- (void)setDisplayName:(id)arg1;
- (void)setFakeFullPath:(id)arg1;
- (void)setFakeIsSpecialMailboxUid:(bool)arg1;
- (void)setFakeURLString:(id)arg1;
- (id)store;

@end
