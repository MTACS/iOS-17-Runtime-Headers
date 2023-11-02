
@interface PRSExternalSystemService : NSObject {
    PRSService * _service;
}

- (void).cxx_destruct;
- (void)createLockScreenPhotosPosterWithImageAtURL:(id)arg1 selectLockScreenPoster:(bool)arg2 completion:(id /* block */)arg3;
- (void)fetchEligibleConfigurationsWithCompletion:(id /* block */)arg1;
- (id)service;
- (void)updateHomeScreenImageForLockScreenPoster:(id)arg1 withImageAtURL:(id)arg2 selectLockPoster:(bool)arg3 completion:(id /* block */)arg4;
- (void)updateLockScreenPhotosPoster:(id)arg1 withImageAtURL:(id)arg2 selectLockScreenPoster:(bool)arg3 completion:(id /* block */)arg4;
- (void)updatePosterMatchingUUID:(id)arg1 withConfiguration:(id)arg2 completion:(id /* block */)arg3;

@end
