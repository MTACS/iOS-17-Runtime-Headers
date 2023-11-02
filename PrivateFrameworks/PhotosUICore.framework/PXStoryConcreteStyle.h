
@interface PXStoryConcreteStyle : NSObject <PXStoryStyle> {
    NSArray * _allowedClipCompositionsInLandscape;
    NSArray * _allowedClipCompositionsInPortrait;
    NSArray * _allowedClipCompositionsInSquareView;
    NSArray * _allowedKeyAssetClipCompositionsInLandscape;
    NSArray * _allowedKeyAssetClipCompositionsInPortrait;
    PFStoryAutoEditConfiguration * _autoEditConfiguration;
    <PXStoryAutoEditDecisionList> * _autoEditDecisionList;
    <PXAudioCueSource> * _cueSource;
    long long  _customColorGradeKind;
    bool  _isCustomized;
    NSString * _originalColorGradeCategory;
    <PXStorySongResource> * _songResource;
    PXStoryConfiguration * _storyConfiguration;
    struct { 
        unsigned long long croppingOptions; 
        bool preferStillKeySegment; 
    }  _styleOptions;
}

@property (nonatomic, readonly) <PXStoryAutoEditDecisionList> *autoEditDecisionList;
@property (nonatomic, readonly) <PXAudioCueSource> *cueSource;
@property (nonatomic, readonly) long long customColorGradeKind;
@property (nonatomic, readonly) bool isCustomized;
@property (nonatomic, readonly) NSString *originalColorGradeCategory;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } outroDuration;
@property (nonatomic, readonly) <PXStorySongResource> *songResource;
@property (nonatomic, readonly) PXStoryConfiguration *storyConfiguration;
@property (nonatomic, readonly) struct { unsigned long long x1; bool x2; } styleOptions;
@property (nonatomic, readonly) Class timelineStyleClass;

+ (id)bestClipCompositionFromClipCompositions:(id)arg1 forKeyAsset:(id)arg2 contentInfo:(const struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_3_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_4_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_4_1_2; } x4; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_5_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_5_1_2; } x5; }*)arg3 playbackStyle:(long long)arg4 spec:(id)arg5 croppingContext:(id)arg6 options:(unsigned long long)arg7;

- (void).cxx_destruct;
- (id)autoEditDecisionList;
- (id)createRandomNumberGenerators;
- (id)cueSource;
- (long long)customColorGradeKind;
- (id)description;
- (id)initWithCustomColorGradeKind:(long long)arg1 originalColorGradeCategory:(id)arg2 songResource:(id)arg3 cueSource:(id)arg4 autoEditDecisionList:(id)arg5 styleOptions:(struct { unsigned long long x1; bool x2; })arg6 isCustomized:(bool)arg7 storyConfiguration:(id)arg8;
- (id)initWithStoryConfiguration:(id)arg1;
- (bool)isCustomized;
- (id)originalColorGradeCategory;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })outroDuration;
- (id)songResource;
- (id)storyConfiguration;
- (struct { unsigned long long x1; bool x2; })styleOptions;
- (Class)timelineStyleClass;
- (id)timelineStyleWithSpec:(id)arg1 resourcesDataSource:(id)arg2 randomNumberGenerators:(id)arg3 errorReporter:(id)arg4;

@end
