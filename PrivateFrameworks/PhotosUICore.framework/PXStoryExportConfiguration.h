
@interface PXStoryExportConfiguration : NSObject <PXStoryMutableExportConfiguration> {
    NSString * _activityCategory;
    NSString * _activityType;
    <PXStoryErrorReporter> * _errorReporter;
    PXStoryConfiguration * _storyConfiguration;
    PXStoryExportVideoOptions * _videoOptions;
}

@property (nonatomic, retain) NSString *activityCategory;
@property (nonatomic, retain) NSString *activityType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <PXStoryErrorReporter> *errorReporter;
@property (nonatomic, readonly) PXExtendedTraitCollection *extendedTraitCollection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXStoryConfiguration *storyConfiguration;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PXStoryExportVideoOptions *videoOptions;

- (void).cxx_destruct;
- (id)activityCategory;
- (id)activityType;
- (void)copyOptionalPropertiesFromOtherExportConfiguration:(id)arg1;
- (id)errorReporter;
- (id)extendedTraitCollection;
- (id)initWithConfiguration:(id)arg1 videoOptions:(id)arg2;
- (id)initWithConfiguration:(id)arg1 videoOptions:(id)arg2 builder:(id /* block */)arg3;
- (void)setActivityCategory:(id)arg1;
- (void)setActivityType:(id)arg1;
- (void)setErrorReporter:(id)arg1;
- (id)storyConfiguration;
- (id)videoOptions;

@end
