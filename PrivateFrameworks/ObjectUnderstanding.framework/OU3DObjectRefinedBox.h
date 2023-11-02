
@interface OU3DObjectRefinedBox : NSObject {
    NSArray * _preRefinedBox;
    NSArray * _refinedBox;
    int  frameIndex;
    bool  isOutlier;
}

@property int frameIndex;
@property bool isOutlier;
@property (retain) NSArray *preRefinedBox;
@property (retain) NSArray *refinedBox;

- (void).cxx_destruct;
- (int)frameIndex;
- (id)init;
- (bool)isOutlier;
- (id)preRefinedBox;
- (id)refinedBox;
- (void)setFrameIndex:(int)arg1;
- (void)setIsOutlier:(bool)arg1;
- (void)setPreRefinedBox:(id)arg1;
- (void)setRefinedBox:(id)arg1;

@end
