
@interface CACLabeledGridOverlayManager : CACSimpleContentViewManager {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _currentGridPortraitUpFrame;
    long long  _currentLevel;
    long long  _currentNumberOfColumns;
    long long  _currentNumberOfRows;
    <CACLabeledGridOverlayManagerDelegate> * _delegate;
    NSMutableArray * _labeledElements;
    float  _maxX;
    float  _maxY;
    bool  _needsToBeRedrawn;
    float  _scale;
    long long  _startingNumber;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } currentGridPortraitUpFrame;
@property long long currentLevel;
@property long long currentNumberOfColumns;
@property long long currentNumberOfRows;
@property (nonatomic) <CACLabeledGridOverlayManagerDelegate> *delegate;
@property (retain) NSArray *labeledElements;
@property float maxX;
@property float maxY;
@property (nonatomic) bool needsToBeRedrawn;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } portraitUpCenterPoint;
@property float scale;
@property long long startingNumber;

+ (struct CGSize { double x1; double x2; })bestGridResolutionForPortraitUpRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 desiredColumns:(unsigned long long)arg2 desiredRows:(unsigned long long)arg3 level:(unsigned long long)arg4 screen:(id)arg5;
+ (struct CGSize { double x1; double x2; })gridResolutionForTopLevelWithPortraitUpRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 desiredColumns:(unsigned long long)arg2 desiredRows:(unsigned long long)arg3 screen:(id)arg4;
+ (unsigned long long)maxNumberOfColumnsForDevice;
+ (unsigned long long)maxNumberOfRowsForDevice;

- (void).cxx_destruct;
- (void)_generateLabeledElementsForPortraitUpRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_isNextLevelAvailable;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bestDrilledGridRectForPortraitUpRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })bestGridResolutionForPortraitUpRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })currentGridPortraitUpFrame;
- (long long)currentLevel;
- (long long)currentNumberOfColumns;
- (long long)currentNumberOfRows;
- (id)delegate;
- (void)hideAnimated:(bool)arg1 completion:(id /* block */)arg2;
- (bool)isOverlay;
- (id)labeledElements;
- (float)maxX;
- (float)maxY;
- (bool)needsToBeRedrawn;
- (struct CGPoint { double x1; double x2; })portraitUpCenterPoint;
- (void)resetAndDrawAtTopLevelWithStartingNumber:(unsigned long long)arg1;
- (void)resetIdleTimer;
- (float)scale;
- (void)setCurrentGridPortraitUpFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentLevel:(long long)arg1;
- (void)setCurrentNumberOfColumns:(long long)arg1;
- (void)setCurrentNumberOfRows:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLabeledElements:(id)arg1;
- (void)setMaxX:(float)arg1;
- (void)setMaxY:(float)arg1;
- (void)setNeedsToBeRedrawn:(bool)arg1;
- (void)setScale:(float)arg1;
- (void)setStartingNumber:(long long)arg1;
- (bool)shouldZoom;
- (void)showOverlayWithStartingNumber:(unsigned long long)arg1;
- (void)startDelayedDimmingOfNumbers;
- (long long)startingNumber;
- (void)stopDelayedDimmingOfNumbers;
- (bool)updateOverlayWithPortraitUpRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 gridContainingLabel:(id)arg2;

@end
