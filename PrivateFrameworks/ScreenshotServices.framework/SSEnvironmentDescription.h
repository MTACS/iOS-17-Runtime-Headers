
@interface SSEnvironmentDescription : NSObject <BSXPCSecureCoding, SSLoggable> {
    SSEnvironmentDescriptionAppleInternalOptions * _appleInternalOptions;
    NSString * _betaApplicationBundleID;
    NSString * _betaApplicationName;
    bool  _canAutosaveToFiles;
    NSDate * _date;
    NSArray * _elements;
    unsigned int  _externalFlashLayerContextID;
    unsigned long long  _externalFlashLayerRenderID;
    NSArray * _harvestedMetadata;
    NSString * _identifier;
    struct CGSize { 
        double width; 
        double height; 
    }  _imagePixelSize;
    double  _imageScale;
    SSImageSurface * _imageSurface;
    unsigned long long  _presentationMode;
    SSUIServiceOptions * _serviceOptions;
    NSString * _sessionIdentifier;
    bool  _skipShutterSound;
}

@property (nonatomic, retain) SSEnvironmentDescriptionAppleInternalOptions *appleInternalOptions;
@property (nonatomic, copy) NSString *betaApplicationBundleID;
@property (nonatomic, copy) NSString *betaApplicationName;
@property (nonatomic, readonly) BSSettings *bsSettings;
@property (nonatomic) bool canAutosaveToFiles;
@property (nonatomic, readonly) NSString *currentApplicationBundleID;
@property (nonatomic, retain) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *elements;
@property (nonatomic) unsigned int externalFlashLayerContextID;
@property (nonatomic) unsigned long long externalFlashLayerRenderID;
@property (nonatomic, copy) NSArray *harvestedMetadata;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) struct CGSize { double x1; double x2; } imagePixelSize;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imagePointSize;
@property (nonatomic) double imageScale;
@property (nonatomic, retain) SSImageSurface *imageSurface;
@property (nonatomic, readonly) NSString *loggableDescription;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic, retain) SSUIServiceOptions *serviceOptions;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (nonatomic) bool skipShutterSound;
@property (readonly) Class superclass;

+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appleInternalOptions;
- (id)betaApplicationBundleID;
- (id)betaApplicationName;
- (id)bsSettings;
- (bool)canAutosaveToFiles;
- (id)currentApplicationBundleID;
- (id)date;
- (id)elements;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned int)externalFlashLayerContextID;
- (unsigned long long)externalFlashLayerRenderID;
- (id)harvestedMetadata;
- (id)identifier;
- (struct CGSize { double x1; double x2; })imagePixelSize;
- (struct CGSize { double x1; double x2; })imagePointSize;
- (double)imageScale;
- (id)imageSurface;
- (id)init;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)loggableDescription;
- (unsigned long long)presentationMode;
- (id)serviceOptions;
- (id)sessionIdentifier;
- (void)setAppleInternalOptions:(id)arg1;
- (void)setBetaApplicationBundleID:(id)arg1;
- (void)setBetaApplicationName:(id)arg1;
- (void)setCanAutosaveToFiles:(bool)arg1;
- (void)setDate:(id)arg1;
- (void)setDebugElements:(id)arg1;
- (void)setExternalFlashLayerContextID:(unsigned int)arg1;
- (void)setExternalFlashLayerRenderID:(unsigned long long)arg1;
- (void)setHarvestedMetadata:(id)arg1;
- (void)setImagePixelSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageScale:(double)arg1;
- (void)setImageSurface:(id)arg1;
- (void)setPresentationMode:(unsigned long long)arg1;
- (void)setServiceOptions:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSkipShutterSound:(bool)arg1;
- (bool)skipShutterSound;
- (void)takeElementsFromDisplayLayout:(id)arg1;

@end
