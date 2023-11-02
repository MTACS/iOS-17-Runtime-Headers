
@interface BWMRCNode : BWNode {
    int (* _createSampleBufferProcessorFunction;
    <BWMetadataDetectedResultsObserver> * _detectedResultsObserver;
    bool  _hasPendingRectOfInterestUpdate;
    long long  _lastDetectedMRCCount;
    bool  _lowPowerModeEnabled;
    NSDictionary * _metadataIdentifierToSymbologyDictionary;
    NSArray * _mrcIdentifiers;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rectOfInterest;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _rectOfInterestLock;
    struct OpaqueFigSampleBufferProcessor { } * _sampleBufferProcessor;
    NSArray * _symbologiesArray;
}

@property (nonatomic) <BWMetadataDetectedResultsObserver> *detectedResultsObserver;

+ (void)initialize;

- (void)dealloc;
- (id)detectedResultsObserver;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)init;
- (bool)lowPowerModeEnabled;
- (id)mrcIdentifiers;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectOfInterest;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setDetectedResultsObserver:(id)arg1;
- (void)setLowPowerModeEnabled:(bool)arg1;
- (void)setMrcIdentifiers:(id)arg1;
- (void)setRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
