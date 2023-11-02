
@interface MUPlaceReviewAvatarGenerator : NSObject {
    NSMutableDictionary * _cachedMaskedImages;
    CNAvatarImageRenderer * _monogrammer;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) CNAvatarImageRenderer *monogrammer;

- (void).cxx_destruct;
- (void)avatarForReview:(id)arg1 pointSize:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (id)init;
- (void)monogramForReviewerName:(id)arg1 pointSize:(struct CGSize { double x1; double x2; })arg2 completion:(id /* block */)arg3;
- (id)monogrammer;
- (void)setMonogrammer:(id)arg1;

@end
