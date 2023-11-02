
@interface CHRecognitionSessionTask : NSObject {
    NSObject<OS_dispatch_queue> * __recognizersQueue;
    bool  _cancelled;
    <CHRecognitionSessionTaskDelegate> * _delegate;
    NSSet * _forceRecognitionStrokeGroupIdentifiers;
    CHRecognitionSessionResult * _inputResult;
    bool  _isHighResponsivenessTask;
    CHRecognitionSessionResult * _outputResult;
    id /* block */  _partialResultBlock;
    NSArray * _preferredLocales;
    long long  _recognitionEnvironment;
    NSArray * _recognitionLocales;
    bool  _saveInputDrawings;
    long long  _status;
    CHStrokeClassificationModel * _strokeClassificationModel;
    bool  _strokeGroupingOnly;
    long long  _strokeGroupingRequirement;
    <CHStrokeProvider> * _strokeProvider;
    NSArray * _subjectStrokeIdentifiers;
}

@property (readonly) bool cancelled;
@property (nonatomic) <CHRecognitionSessionTaskDelegate> *delegate;
@property (nonatomic, copy) NSSet *forceRecognitionStrokeGroupIdentifiers;
@property (nonatomic, readonly) CHRecognitionSessionResult *inputResult;
@property (nonatomic, readonly) bool isHighResponsivenessTask;
@property (nonatomic, readonly) CHRecognitionSessionResult *outputResult;
@property (nonatomic, readonly, copy) NSArray *preferredLocales;
@property (nonatomic, readonly) long long recognitionEnvironment;
@property (nonatomic, readonly, copy) NSArray *recognitionLocales;
@property (nonatomic) bool saveInputDrawings;
@property (nonatomic, readonly) long long status;
@property (nonatomic) bool strokeGroupingOnly;
@property (nonatomic, readonly) long long strokeGroupingRequirement;
@property (nonatomic, readonly) <CHStrokeProvider> *strokeProvider;

- (void).cxx_destruct;
- (void)cancel;
- (bool)cancelled;
- (id)clutterFilter;
- (id)delegate;
- (id)forceRecognitionStrokeGroupIdentifiers;
- (id)init;
- (id)initWithLocales:(id)arg1 preferredLocales:(id)arg2 strokeProvider:(id)arg3 inputResult:(id)arg4 recognitionQOSClass:(unsigned int)arg5 recognitionEnvironment:(long long)arg6;
- (id)initWithLocales:(id)arg1 preferredLocales:(id)arg2 strokeProvider:(id)arg3 inputResult:(id)arg4 recognitionQOSClass:(unsigned int)arg5 recognitionEnvironment:(long long)arg6 isHighResponsivenessTask:(bool)arg7 strokeClassificationModel:(id)arg8 strokeGroupingRequirement:(long long)arg9 partialResultBlock:(id /* block */)arg10;
- (id)initWithLocales:(id)arg1 preferredLocales:(id)arg2 strokeProvider:(id)arg3 inputResult:(id)arg4 recognitionQOSClass:(unsigned int)arg5 recognitionEnvironment:(long long)arg6 isHighResponsivenessTask:(bool)arg7 strokeClassificationModel:(id)arg8 strokeGroupingRequirement:(long long)arg9 subjectStrokeIdentifiers:(id)arg10 partialResultBlock:(id /* block */)arg11;
- (id)inputResult;
- (bool)isHighResponsivenessTask;
- (void)main;
- (id)newGroupingManager;
- (id)newStrokeClassifier;
- (id)outputResult;
- (id)preferredLocales;
- (long long)recognitionEnvironment;
- (id)recognitionLocales;
- (id)recognitionResultsForGroupingResult:(id)arg1 groupingManager:(id)arg2;
- (bool)saveInputDrawings;
- (void)setDelegate:(id)arg1;
- (void)setForceRecognitionStrokeGroupIdentifiers:(id)arg1;
- (void)setSaveInputDrawings:(bool)arg1;
- (void)setStrokeGroupingOnly:(bool)arg1;
- (long long)status;
- (bool)strokeGroupingOnly;
- (long long)strokeGroupingRequirement;
- (id)strokeProvider;
- (id)textCorrectionResultsForGroupingResult:(id)arg1 groupingManager:(id)arg2;

@end
