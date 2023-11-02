
@interface SHMediaTimelineCustomCatalogMatcher : NSObject <SHMatcher, SHMatcherDelegate, SHMediaTimelineDelegate> {
    SHMediaTimeline * _contextTimeline;
    SHCustomCatalogMatcher * _customCatalogMatcher;
    <SHMatcherDelegate> * _delegate;
    NSUUID * _timelineRequestID;
}

@property (nonatomic, retain) SHMediaTimeline *contextTimeline;
@property (nonatomic, retain) SHCustomCatalogMatcher *customCatalogMatcher;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SHMatcherDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUUID *timelineRequestID;

- (void).cxx_destruct;
- (void)callDelegateWithSyntheticMatchForResponse:(id)arg1;
- (id)contextTimeline;
- (id)customCatalogMatcher;
- (void)dealloc;
- (id)delegate;
- (id)initWithCustomCatalog:(id)arg1;
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;
- (void)mediaTimeline:(id)arg1 hasUpdatedInScopeMediaItems:(id)arg2;
- (void)restartTimelineWithMediaItems:(id)arg1;
- (void)setContextTimeline:(id)arg1;
- (void)setCustomCatalogMatcher:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTimelineRequestID:(id)arg1;
- (void)startRecognitionForRequest:(id)arg1;
- (void)stopRecognition;
- (void)stopRecognitionForRequestID:(id)arg1;
- (id)timelineRequestID;

@end
