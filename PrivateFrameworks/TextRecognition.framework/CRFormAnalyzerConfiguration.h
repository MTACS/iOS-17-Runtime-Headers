
@interface CRFormAnalyzerConfiguration : NSObject {
    bool  _cpuOnly;
    NSURL * _customModelURL;
    bool  _gatingWithOCRResults;
    bool  _resizeInputImage;
    bool  _tileInputImage;
    bool  _useContourBasedDetection;
    bool  _useModelBasedDetection;
    bool  _useTextBasedDetection;
}

@property (nonatomic) bool cpuOnly;
@property (nonatomic, retain) NSURL *customModelURL;
@property (nonatomic) bool gatingWithOCRResults;
@property (nonatomic) bool resizeInputImage;
@property (nonatomic) bool tileInputImage;
@property (nonatomic) bool useContourBasedDetection;
@property (nonatomic) bool useModelBasedDetection;
@property (nonatomic) bool useTextBasedDetection;

- (void).cxx_destruct;
- (bool)cpuOnly;
- (id)customModelURL;
- (bool)gatingWithOCRResults;
- (id)init;
- (bool)resizeInputImage;
- (void)setCpuOnly:(bool)arg1;
- (void)setCustomModelURL:(id)arg1;
- (void)setGatingWithOCRResults:(bool)arg1;
- (void)setResizeInputImage:(bool)arg1;
- (void)setTileInputImage:(bool)arg1;
- (void)setUseContourBasedDetection:(bool)arg1;
- (void)setUseModelBasedDetection:(bool)arg1;
- (void)setUseTextBasedDetection:(bool)arg1;
- (bool)tileInputImage;
- (bool)useContourBasedDetection;
- (bool)useModelBasedDetection;
- (bool)useTextBasedDetection;

@end
