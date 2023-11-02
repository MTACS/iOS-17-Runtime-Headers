
@interface CRDetectorConfiguration : NSObject {
    unsigned long long  _computeDeviceType;
    NSURL * _customModelURL;
    bool  _detectTables;
    bool  _disableScriptDetection;
    bool  _disableTextTypeDetection;
    bool  _extractPolygons;
    double  _inputLengthLimit;
    bool  _logIntermediateResults;
    struct CGSize { 
        double width; 
        double height; 
    }  _maximumInputSize;
    bool  _mergeFullTile;
    int  _mergingType;
    NSObject<MTLDevice> * _metalDevice;
    struct CGSize { 
        double width; 
        double height; 
    }  _minimumInputSize;
    double  _minimumTextHeight;
    NSString * _prioritization;
    bool  _runFineScale;
    bool  _runFullTile;
    double  _scoreMapScaleFactor;
    NSDictionary * _scriptRatioThresholds;
    bool  _skipVerticalText;
    unsigned long long  _tableMinDetectableArea;
    double  _tileOverlap;
    struct CGSize { 
        double width; 
        double height; 
    }  _tileSize;
    bool  _useScaleTraversal;
}

@property (readonly) unsigned long long computeDeviceType;
@property (readonly) NSURL *customModelURL;
@property (readonly) bool detectTables;
@property (readonly) bool disableScriptDetection;
@property (readonly) bool disableTextTypeDetection;
@property bool extractPolygons;
@property (readonly) double inputLengthLimit;
@property (readonly) bool logIntermediateResults;
@property (readonly) struct CGSize { double x1; double x2; } maximumInputSize;
@property bool mergeFullTile;
@property int mergingType;
@property (readonly) NSObject<MTLDevice> *metalDevice;
@property (readonly) struct CGSize { double x1; double x2; } minimumInputSize;
@property (readonly) double minimumTextHeight;
@property (readonly) NSString *prioritization;
@property bool runFineScale;
@property bool runFullTile;
@property (readonly) double scoreMapScaleFactor;
@property (readonly) NSDictionary *scriptRatioThresholds;
@property (readonly) bool skipVerticalText;
@property (readonly) unsigned long long tableMinDetectableArea;
@property (readonly) double tileOverlap;
@property (readonly) struct CGSize { double x1; double x2; } tileSize;
@property bool useScaleTraversal;

- (void).cxx_destruct;
- (unsigned long long)computeDeviceType;
- (id)customModelURL;
- (bool)detectTables;
- (bool)disableScriptDetection;
- (bool)disableTextTypeDetection;
- (bool)extractPolygons;
- (id)initV1DefaultConfig;
- (id)initV2DefaultConfig;
- (id)initV3DefaultConfig;
- (id)initWithImageReaderOptions:(id)arg1 error:(id*)arg2;
- (double)inputLengthLimit;
- (bool)logIntermediateResults;
- (struct CGSize { double x1; double x2; })maximumInputSize;
- (bool)mergeFullTile;
- (int)mergingType;
- (id)metalDevice;
- (struct CGSize { double x1; double x2; })minimumInputSize;
- (double)minimumTextHeight;
- (id)prioritization;
- (bool)runFineScale;
- (bool)runFullTile;
- (double)scoreMapScaleFactor;
- (id)scriptRatioThresholds;
- (void)setExtractPolygons:(bool)arg1;
- (void)setMergeFullTile:(bool)arg1;
- (void)setMergingType:(int)arg1;
- (void)setRunFineScale:(bool)arg1;
- (void)setRunFullTile:(bool)arg1;
- (void)setUseScaleTraversal:(bool)arg1;
- (bool)skipVerticalText;
- (unsigned long long)tableMinDetectableArea;
- (double)tileOverlap;
- (struct CGSize { double x1; double x2; })tileSize;
- (bool)useScaleTraversal;

@end
