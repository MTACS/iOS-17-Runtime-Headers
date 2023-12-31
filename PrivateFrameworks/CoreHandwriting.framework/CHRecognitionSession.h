
@interface CHRecognitionSession : NSObject <CHRecognitionSessionTextInputTaskDelegate, NSSecureCoding> {
    NSMutableArray * __activeTasks;
    unsigned long long  __changeCoalescingIndex;
    NSMutableArray * __changeObservers;
    NSMutableDictionary * __correctionRecognizersByLocalesKey;
    bool  __hasUnprocessedChanges;
    NSObject<OS_dispatch_queue> * __highResponsivenessQueue;
    NSMutableArray * __inputDrawingClients;
    NSArray * __latestTextInputTargets;
    NSMutableDictionary * __recognizersByLocaleID;
    bool  __servesBackgroundIndexation;
    NSObject<OS_dispatch_queue> * __sessionQueue;
    bool  __shouldForceFastGrouping;
    unsigned int  __taskQueueQoSClass;
    NSObject<OS_dispatch_queue> * __tasksWorkQueueBackground;
    NSObject<OS_dispatch_queue> * __tasksWorkQueueForeground;
    NSArray * __textRecognitionLocales;
    CHTextInputQuery * _activeTextInputQuery;
    int  _autoCapitalizationMode;
    int  _autoCorrectionMode;
    int  _baseWritingDirection;
    CHRecognitionSessionResult * _cachedFastGroupingRecognitionResult;
    <CHRecognitionSessionDataSource> * _dataSource;
    CHRecognitionSessionResult * _lastRecognitionResult;
    <CHStrokeProvider> * _latestStrokeProvider;
    NSOrderedSet * _latestStrokeProviderVisibleStrokes;
    long long  _mode;
    CHRecognitionSessionResult * _partialRecognitionResult;
    NSArray * _preferredLocales;
    long long  _priority;
    long long  _recognitionEnvironment;
    bool  _servesBackgroundIndexation;
    CHRecognitionSessionVersion * _sessionVersion;
    long long  _status;
    CHStrokeClassificationModel * _strokeClassificationModel;
    unsigned long long  _strokeGroupOrdering;
    bool  _strokeGroupingOnly;
}

@property (nonatomic) CHTextInputQuery *activeTextInputQuery;
@property (nonatomic) int autoCapitalizationMode;
@property (nonatomic) int autoCorrectionMode;
@property (nonatomic) int baseWritingDirection;
@property (nonatomic) <CHRecognitionSessionDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setLastRecognitionResult:, retain) CHRecognitionSessionResult *lastRecognitionResult;
@property (readonly) CHRecognitionSessionResult *lastRecognitionResult;
@property (readonly) <CHStrokeProvider> *latestStrokeProvider;
@property (setter=_setLatestStrokeProvider:, retain) <CHStrokeProvider> *latestStrokeProvider;
@property (nonatomic, copy) NSArray *locales;
@property (nonatomic, readonly) long long mode;
@property (nonatomic, copy) NSArray *preferredLocales;
@property (nonatomic) long long priority;
@property (nonatomic) long long recognitionEnvironment;
@property (nonatomic) bool servesBackgroundIndexation;
@property (nonatomic, readonly) NSData *sessionData;
@property (readonly) CHRecognitionSessionVersion *sessionVersion;
@property (setter=_setSessionVersion:, retain) CHRecognitionSessionVersion *sessionVersion;
@property (nonatomic) bool shouldForceFastGrouping;
@property (setter=_setStatus:, nonatomic) long long status;
@property (nonatomic, readonly) long long status;
@property (nonatomic) unsigned long long strokeGroupOrdering;
@property (nonatomic) bool strokeGroupingOnly;
@property (readonly) Class superclass;

+ (id)createRecognizerForLocale:(id)arg1 sessionMode:(long long)arg2 remote:(bool)arg3 priority:(long long)arg4;
+ (id)createRecognizerForLocales:(id)arg1 sessionMode:(long long)arg2 remote:(bool)arg3 priority:(long long)arg4;
+ (id)effectiveLocalesFromLocales:(id)arg1;
+ (bool)isLocaleSupported:(id)arg1;
+ (bool)shouldRunRecognitionLocallyWithEnvironment:(long long)arg1;
+ (id)strokeIdentifiersInProximalGroupsForStrokeIdentifiers:(id)arg1 sortedStrokeGroups:(id)arg2 clusteredStrokeGroups:(id)arg3 unusedStrokeIdentifiers:(id*)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setLastRecognitionResult:(id)arg1;
- (void)_setLatestStrokeProvider:(id)arg1;
- (void)_setSessionVersion:(id)arg1;
- (void)_setStatus:(long long)arg1;
- (id)activeTextInputQuery;
- (int)autoCapitalizationMode;
- (int)autoCorrectionMode;
- (int)baseWritingDirection;
- (void)cancelOngoingRequests;
- (id)contextualTextResultsForContextStrokes:(id)arg1 completion:(id /* block */)arg2 shouldCancel:(id /* block */)arg3;
- (id)dataSource;
- (void)encodeWithCoder:(id)arg1;
- (id)indexableContent;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMode:(long long)arg1;
- (id)initWithMode:(long long)arg1 recognitionSessionResult:(id)arg2 dataSource:(id)arg3;
- (id)initWithMode:(long long)arg1 withVersion:(id)arg2;
- (id)lastRecognitionResult;
- (id)lastRecognitionResultWaitingForPendingTasks;
- (id)latestStrokeProvider;
- (bool)loadSessionData:(id)arg1 error:(id*)arg2;
- (id)locales;
- (long long)mode;
- (id)preferredLocales;
- (long long)priority;
- (void)rebuildRecognitionResults;
- (long long)recognitionEnvironment;
- (id)recognizableDrawingForStrokeGroupQueryItem:(id)arg1;
- (id)recognizerForLocale:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)registerInputDrawingClient:(id)arg1;
- (bool)servesBackgroundIndexation;
- (id)sessionData;
- (id)sessionVersion;
- (void)setActiveTextInputQuery:(id)arg1;
- (void)setAutoCapitalizationMode:(int)arg1;
- (void)setAutoCorrectionMode:(int)arg1;
- (void)setBaseWritingDirection:(int)arg1;
- (void)setDataSource:(id)arg1;
- (void)setLocales:(id)arg1;
- (void)setNeedsRecognitionUpdate;
- (void)setPreferredLocales:(id)arg1;
- (void)setPriority:(long long)arg1;
- (void)setRecognitionEnvironment:(long long)arg1;
- (void)setServesBackgroundIndexation:(bool)arg1;
- (void)setShouldForceFastGrouping:(bool)arg1;
- (void)setStrokeGroupOrdering:(unsigned long long)arg1;
- (void)setStrokeGroupingOnly:(bool)arg1;
- (bool)shouldForceFastGrouping;
- (long long)status;
- (unsigned long long)strokeGroupOrdering;
- (bool)strokeGroupingOnly;
- (id)strokePointItalicizeTransformationsForContextStrokes:(id)arg1 completionWithTelemetry:(id /* block */)arg2 shouldCancel:(id /* block */)arg3;
- (id)strokePointTextLineStraighteningTransformationsForContextStrokes:(id)arg1 completionWithTelemetry:(id /* block */)arg2 shouldCancel:(id /* block */)arg3;
- (id)textCorrectionRecognizerForLocales:(id)arg1;
- (id)tokenStrokeIdentifiersForContextStrokes:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2 tokenizationLevel:(long long)arg3 completion:(id /* block */)arg4 shouldCancel:(id /* block */)arg5;
- (void)unregisterChangeObserver:(id)arg1;
- (void)unregisterInputDrawingClient:(id)arg1;
- (void)waitForPendingRecognitionTasks;

@end
