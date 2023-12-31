
@interface TSDFrameSpec : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  mAdornmentPosition;
    struct CGSize { 
        double width; 
        double height; 
    }  mAdornmentSize;
    double  mBottomHeight;
    double  mBottomInset;
    NSBundle * mBundle;
    bool  mDisplayInPicker;
    NSString * mFrameName;
    bool  mHasAdornment;
    bool  mHasImages;
    bool  mHasMask;
    int  mInterest;
    double  mLeftInset;
    double  mLeftWidth;
    bool  mLoadedImageMetrics;
    double  mMinimumAssetScale;
    NSMutableDictionary * mProvidersByKey;
    double  mRightInset;
    double  mRightWidth;
    int  mTilingMode;
    double  mTopHeight;
    double  mTopInset;
}

@property (nonatomic, readonly) bool displayInPicker;
@property (nonatomic, readonly, copy) NSString *frameName;

+ (id)frameSpecWithName:(id)arg1;
+ (id)frameSpecs;
+ (id)p_imageKeys;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)displayInPicker;
- (id)frameName;
- (void)i_addInterestInProviders;
- (struct CGPoint { double x1; double x2; })i_adornmentPosition;
- (struct CGSize { double x1; double x2; })i_adornmentSize;
- (double)i_bottomHeight;
- (double)i_bottomInset;
- (bool)i_hasAdornment;
- (bool)i_hasImages;
- (bool)i_hasMask;
- (double)i_leftInset;
- (double)i_leftWidth;
- (double)i_minimumAssetScale;
- (id)i_providerForIndex:(int)arg1 mask:(bool)arg2;
- (void)i_removeInterestInProviders;
- (double)i_rightInset;
- (double)i_rightWidth;
- (int)i_tilingMode;
- (double)i_topHeight;
- (double)i_topInset;
- (id)initWithBundle:(id)arg1 isVolatile:(bool)arg2;
- (id)p_imageDataForKey:(id)arg1;
- (id)p_infoDictionary;
- (void)p_loadImageMetrics;

@end
