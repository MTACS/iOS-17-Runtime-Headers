
@interface CRFeatureSequenceRecognitionInfo : NSObject <CRTextRecognizerFeatureInfo> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _bounds;
    struct CGSize { 
        double width; 
        double height; 
    }  _featureImageSize;
    unsigned long long  _layoutDirection;
    CRDetectedLineRegion * _lineRegion;
    long long  _orientationAdjustment;
    double  _orientationConfidence;
    NSString * _orientationOutputResult;
    CRRecognizedTextRegion * _recognizedTextRegion;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rotatedROI;
    float  _scale;
    NSObject<CRScriptCategory> * _sequenceScriptCategory;
    NSString * _sequenceScriptOutputResult;
    NSObject<CRTextRecognizerDecodingTransientResult> * _transientDecodingResult;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CRDetectedLineRegion *lineRegion;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)lineRegion;
- (void)setLineRegion:(id)arg1;

@end
