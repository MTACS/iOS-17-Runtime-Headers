
@interface PKRecognitionSessionManager : NSObject <CHRecognitionSessionDataSource, CHRecognitionSessionObserver, PKDataDetectorQueryDelegate, PKHashtagQueryDelegate, PKMentionQueryDelegate> {
    <PKRecognitionSessionManagerDelegate> * _delegate;
    PKDrawing * _drawingForGetter;
    bool  _isTearingDown;
    NSSet * _mentionSuffixes;
    NSObject<OS_dispatch_queue> * _recognitionSessionQueue;
    _Atomic long long  _stateAtomic;
    PKDrawing * q_drawing;
    NSHashTable * q_listeners;
    NSDate * q_previousTime;
    PKRecognitionQueryController * q_queryController;
    CHRecognitionSession * q_session;
    NSArray * q_visibleOnscreenStrokes;
    bool  q_wantsDataDetection;
    bool  q_wantsGrouping;
    bool  q_wantsHashtagDetection;
    bool  q_wantsMentionDetection;
    bool  q_wantsTranscription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

+ (id)enabledLocales;

- (void).cxx_destruct;
- (void)dataDetectorQuery:(id)arg1 foundItems:(id)arg2;
- (void)dealloc;
- (void)hashtagQuery:(id)arg1 foundItems:(id)arg2;
- (id)init;
- (id)listeners;
- (void)mentionQuery:(id)arg1 foundItems:(id)arg2;
- (void)recognitionSessionDidUpdateRecognitionResult:(id)arg1;
- (void)setState:(long long)arg1;
- (long long)state;
- (id)strokeProviderSnapshot;
- (void)textInputDidChange:(id)arg1;

@end
