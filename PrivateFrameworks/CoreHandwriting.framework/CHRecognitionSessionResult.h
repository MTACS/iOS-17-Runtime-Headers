
@interface CHRecognitionSessionResult : NSObject <NSCopying, NSSecureCoding> {
    bool  __hasCompleteRecognitionResults;
    NSDictionary * __recognitionResultsByGroupID;
    bool  __shouldUseCachedHasCompleteRecognitionResults;
    NSDictionary * __textCorrectionResultsByGroupID;
    long long  __transcriptionCapability;
    CHStrokeClutterFilter * _clutterFilter;
    NSData * _encodedStrokeProviderVersion;
    struct { 
        double strokeClutterFilteringDuration; 
        double strokeClassificationDuration; 
        double groupingDuration; 
        double recognitionDuration; 
        double totalDuration; 
    }  _generationDuration;
    NSArray * _locales;
    NSArray * _orderedStrokeIdentifiers;
    NSArray * _preferredLocales;
    long long  _recognitionEnvironment;
    long long  _sessionMode;
    CHStrokeClassificationResult * _strokeClassificationResult;
    CHStrokeGroupingResult * _strokeGroupingResult;
    <CHStrokeProviderVersion> * _strokeProviderVersion;
}

@property (nonatomic, readonly) NSString *allResultsDebugDescription;
@property (nonatomic, readonly) NSArray *allResultsDebugDescriptionByGroup;
@property (nonatomic, readonly) CHStrokeClutterFilter *clutterFilter;
@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; double x5; } generationDuration;
@property (nonatomic, readonly) NSString *highConfidenceDebugDescription;
@property (nonatomic, readonly, copy) NSArray *locales;
@property (nonatomic, readonly) NSArray *orderedStrokeIdentifiers;
@property (nonatomic, readonly, copy) NSArray *preferredLocales;
@property (nonatomic, readonly) long long recognitionEnvironment;
@property (nonatomic, readonly) long long sessionMode;
@property (nonatomic, readonly) CHStrokeClassificationResult *strokeClassificationResult;
@property (nonatomic, readonly) CHStrokeGroupingResult *strokeGroupingResult;
@property (nonatomic, readonly) <CHStrokeProviderVersion> *strokeProviderVersion;

+ (id)loadFromFile:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allResultsDebugDescription;
- (id)allResultsDebugDescriptionByGroup;
- (id)allResultsDebugDescriptionWithGroupHeaderBlock:(id /* block */)arg1;
- (id)clutterFilter;
- (id)contextualResultsWithFullyCoveredStrokeGroups:(id)arg1 partiallyCoveredStrokeGroups:(id)arg2 drawingCanvasSize:(struct CGSize { double x1; double x2; })arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encodedStrokeProviderVersion;
- (id)fullyCoveredStrokeGroupsForContextStrokes:(id)arg1 partiallyCoveredStrokeGroups:(id*)arg2;
- (struct { double x1; double x2; double x3; double x4; double x5; })generationDuration;
- (bool)hasCompleteRecognitionResults;
- (id)highConfidenceDebugDescription;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(id)arg1 validStrokes:(id)arg2;
- (id)initWithStrokeProviderVersion:(id)arg1 encodedStrokeProviderVersion:(id)arg2 orderedStrokeIdentifiers:(id)arg3 sessionMode:(long long)arg4 locales:(id)arg5 preferredLocales:(id)arg6 clutterFilter:(id)arg7 strokeClassificationResult:(id)arg8 strokeGroupingResult:(id)arg9 recognitionResults:(id)arg10 inlineContinuousModeResults:(id)arg11 generationDuration:(struct { double x1; double x2; double x3; double x4; double x5; })arg12 recognitionEnvironment:(long long)arg13;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSerializableRecognitionSessionResult:(id)arg1;
- (id)locales;
- (id)orderedStrokeIdentifiers;
- (id)preferredLocales;
- (long long)recognitionEnvironment;
- (id)recognitionResultForStrokeGroupIdentifier:(long long)arg1;
- (long long)sessionMode;
- (id)strokeClassificationResult;
- (id)strokeGroupingResult;
- (id)strokeProviderVersion;
- (id)textCorrectionResultForStrokeGroupIdentifier:(long long)arg1;
- (id)writeToFile;
- (id)writeToFileInFolder:(id)arg1 basename:(id)arg2;

@end
