
@interface VKTextFrameProcessorConfiguration : NSObject <NSCopying> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _comparisonPoint;
    NSArray * _customWords;
    unsigned long long  _dataType;
    unsigned long long  _documentBlockType;
    bool  _isForSingleItem;
    NSArray * _recognitionLanguages;
    bool  _usesAlternateLineGrouping;
    bool  _usesLanguageDetection;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } comparisonPoint;
@property (nonatomic, copy) NSArray *customWords;
@property (nonatomic) unsigned long long dataType;
@property (nonatomic) unsigned long long documentBlockType;
@property (nonatomic) bool isForSingleItem;
@property (nonatomic, copy) NSArray *recognitionLanguages;
@property (nonatomic, readonly) bool shouldPerformTextDetectionGating;
@property (nonatomic) bool usesAlternateLineGrouping;
@property (nonatomic) bool usesLanguageDetection;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })comparisonPoint;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customWords;
- (unsigned long long)dataType;
- (unsigned long long)documentBlockType;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTextFrameProcessorConfiguration:(id)arg1;
- (bool)isForSingleItem;
- (id)recognitionLanguages;
- (void)setComparisonPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCustomWords:(id)arg1;
- (void)setDataType:(unsigned long long)arg1;
- (void)setDocumentBlockType:(unsigned long long)arg1;
- (void)setIsForSingleItem:(bool)arg1;
- (void)setRecognitionLanguages:(id)arg1;
- (void)setUsesAlternateLineGrouping:(bool)arg1;
- (void)setUsesLanguageDetection:(bool)arg1;
- (bool)shouldPerformTextDetectionGating;
- (bool)usesAlternateLineGrouping;
- (bool)usesLanguageDetection;

@end
