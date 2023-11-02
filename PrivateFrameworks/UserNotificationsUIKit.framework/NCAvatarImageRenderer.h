
@interface NCAvatarImageRenderer : NSObject {
    NSObject<OS_dispatch_queue> * _avatarImageGenerationQueue;
    unsigned long long  _avatarImageGenerationQueueUsageCount;
    CNAvatarImageRenderer * _avatarRenderer;
    double  _pointSize;
}

+ (id)sharedInstanceForPointSize:(double)arg1;

- (void).cxx_destruct;
- (void)_decrementAvatarImageGenerationQueueUsageCountAndInvalidateIfNeeded;
- (id)_getAvatarImageGenerationQueueAndIncrementUsageCount;
- (void)_imageForContacts:(id)arg1 compatibleWithTraitCollection:(id)arg2 circular:(bool)arg3 completion:(id /* block */)arg4;
- (id)_imageNamed:(id)arg1 inBundleIdentifier:(id)arg2 traitCollection:(id)arg3;
- (id)_initWithPointSize:(double)arg1;
- (id)_silhouetteFallbackImageNameForContacts:(id)arg1;
- (id)_systemImageNamed:(id)arg1 traitCollection:(id)arg2;
- (void)renderAvatarForRequest:(id)arg1 compatibleWithTraitCollection:(id)arg2 completion:(id /* block */)arg3;

@end
