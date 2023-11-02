
@interface PBFProactivePosterGalleryLayoutProvider : NSObject <PBFPosterGalleryLayoutProviding>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)fetchGalleryLayoutWithCompletion:(id /* block */)arg1;
- (void)handlePosterDescriptorsDidChange:(id)arg1 withCompletion:(id /* block */)arg2;

@end
