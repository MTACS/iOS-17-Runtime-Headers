
@interface VKCImageSubjectContext : NSObject {
    NSIndexSet * _activeMADSubjectIndexes;
    NSIndexSet * _activeSubjectIndexes;
    VKCImageSubjectContextInstance * _allSubjectsInstance;
    UIImage * _customImageForRemoveBackground;
    VKCRemoveBackgroundResult * _maskResult;
    unsigned long long  _subjectCount;
    NSArray * _subjectInstances;
    NSArray * _subjectPaths;
}

@property (nonatomic, retain) NSIndexSet *activeMADSubjectIndexes;
@property (nonatomic, retain) NSIndexSet *activeSubjectIndexes;
@property (nonatomic, readonly) NSIndexSet *allSubjectIndexes;
@property (nonatomic, retain) VKCImageSubjectContextInstance *allSubjectsInstance;
@property (nonatomic, readonly) bool allSubjectsSelected;
@property (nonatomic, readonly) NSNumber *animatedStickerScore;
@property (nonatomic, retain) UIImage *customImageForRemoveBackground;
@property (nonatomic, readonly) long long imageOrientation;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) VKCRemoveBackgroundResult *maskResult;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedCropRect;
@property (nonatomic, readonly) VKCRemoveBackgroundRequest *request;
@property (nonatomic) unsigned long long subjectCount;
@property (nonatomic, retain) NSArray *subjectInstances;
@property (nonatomic, retain) NSArray *subjectPaths;

- (void).cxx_destruct;
- (id)activeMADSubjectIndexes;
- (id)activeSubjectIndexes;
- (id)allSubjectIndexes;
- (id)allSubjectsInstance;
- (bool)allSubjectsSelected;
- (id)animatedStickerScore;
- (bool)containsSubjectAtNormalizedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)convertExternalIndexSetToInternal:(id)arg1;
- (id)convertIndexSetToConcreteSubjectIndexes:(id)arg1;
- (id)customImageForRemoveBackground;
- (long long)imageOrientation;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)indexOfSubjectAtNormalizedPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)initWithMaskResult:(id)arg1;
- (id)madSubjectIndexesForVKSubjectIndexes:(id)arg1;
- (id)maskResult;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedCropRect;
- (id)normalizedPathForActiveSubjectsWithContentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 topLevelOnly:(bool)arg2;
- (id)normalizedPathForSubjectAtIndex:(id)arg1 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 topLevelOnly:(bool)arg3;
- (id)normalizedPathForSubjectWithIndexSet:(id)arg1 contentsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 topLevelOnly:(bool)arg3;
- (void)prepareInstanceImagesWithCIContext:(id)arg1 instance:(id)arg2 image:(struct CGImage { }*)arg3;
- (void)preparePathsAndImageMaskIfNecessaryWithContext:(id)arg1;
- (void)processPathForInstance:(id)arg1;
- (id)request;
- (void)setActiveMADSubjectIndexes:(id)arg1;
- (void)setActiveSubjectIndexes:(id)arg1;
- (void)setAllSubjectsInstance:(id)arg1;
- (void)setCustomImageForRemoveBackground:(id)arg1;
- (void)setMaskResult:(id)arg1;
- (void)setSubjectCount:(unsigned long long)arg1;
- (void)setSubjectInstances:(id)arg1;
- (void)setSubjectPaths:(id)arg1;
- (unsigned long long)subjectCount;
- (bool)subjectIndexes:(id)arg1 equivalentToIndexes:(id)arg2;
- (id)subjectInstances;
- (id)subjectPaths;

@end
