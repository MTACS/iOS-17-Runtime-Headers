
@interface ContactsUI.CNAvatarPosterPairFingerprint : NSObject {
    void avatarFingerprint;
    void posterFingerprint;
    void sourceType;
}

@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
