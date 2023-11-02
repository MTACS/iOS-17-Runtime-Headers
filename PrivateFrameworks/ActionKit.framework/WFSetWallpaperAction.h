
@interface WFSetWallpaperAction : WFAction {
    NSUUID * _createdPosterConfigurationUUID;
}

@property (nonatomic, retain) NSUUID *createdPosterConfigurationUUID;

+ (id)invalidPosterError;
+ (id)unableToGetImageError;
+ (id)userInterfaceProtocol;

- (void).cxx_destruct;
- (void)buildWallpaperConfigurationFromCollection:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)cancel;
- (id)contentDestinationWithError:(id*)arg1;
- (id)createdPosterConfigurationUUID;
- (double)currentParallaxFactor;
- (void)deletePosterWithUUID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)finishAndSetCurrentPosterIfNecessary:(id)arg1 isNewPoster:(bool)arg2;
- (id)imageTooLargeError;
- (bool)inputPassthrough;
- (id)invalidLocationError;
- (id)invalidLocationErrorWithProvidedLocation:(id)arg1;
- (id)locationParameterValues;
- (double)maximumSizeInPixels;
- (id)missingImageError;
- (id)noPosterHomeError;
- (bool)perspectiveZoom;
- (void)preparePosterWithCompletionHandler:(id /* block */)arg1;
- (id)readableLocationParameterValues;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runLegacySetWallpaperWithInput:(id)arg1;
- (long long)sbf_wallpaperLocationFromLocationParameter;
- (void)setCreatedPosterConfigurationUUID:(id)arg1;
- (void)setLegacyWallpaperWithImage:(id)arg1;
- (id)setWallpaperFailedError;
- (bool)showPreview;
- (id)smartPromptWithContentDescription:(id)arg1 contentDestination:(id)arg2 workflowName:(id)arg3;
- (bool)supportsPosters;
- (long long)wf_wallpaperLocationFromLocationParameter;

@end
