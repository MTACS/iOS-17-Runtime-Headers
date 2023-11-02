
@interface ATXProactiveSuggestionUIFeedbackQuery : NSObject {
    BPSPublisher<BMBookmarkablePublisher> * _blendingModelPublisher;
    NSURL * _bookmarkURLPath;
    NSSet * _clientModelIds;
    unsigned char  _consumerSubTypeToConsider;
    BPSPublisher<BMBookmarkablePublisher> * _contextPublisher;
    <ATXUniversalBlendingLayerHyperParametersProtocol> * _hyperParameters;
    NSDate * _startDateForResults;
    BPSPublisher<BMBookmarkablePublisher> * _uiPublisher;
}

@property (nonatomic, retain) BPSPublisher<BMBookmarkablePublisher> *blendingModelPublisher;
@property (nonatomic, readonly) NSURL *bookmarkURLPath;
@property (nonatomic, readonly) NSSet *clientModelIds;
@property (nonatomic, readonly) unsigned char consumerSubTypeToConsider;
@property (nonatomic, retain) BPSPublisher<BMBookmarkablePublisher> *contextPublisher;
@property (nonatomic, retain) <ATXUniversalBlendingLayerHyperParametersProtocol> *hyperParameters;
@property (nonatomic, readonly) NSDate *startDateForResults;
@property (nonatomic, retain) BPSPublisher<BMBookmarkablePublisher> *uiPublisher;

- (void).cxx_destruct;
- (id)blendingModelPublisher;
- (id)bookmarkURLPath;
- (id)clientModelIds;
- (unsigned char)consumerSubTypeToConsider;
- (id)contextPublisher;
- (void)enumerateUIFeedbackResultsWithBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (id)hyperParameters;
- (id)initWithClientModelIds:(id)arg1 consumerSubTypeToConsider:(unsigned char)arg2 startDateForResults:(id)arg3 bookmarkURLPath:(id)arg4 uiPublisher:(id)arg5 blendingModelPublisher:(id)arg6 contextPublisher:(id)arg7 hyperParameters:(id)arg8;
- (void)setBlendingModelPublisher:(id)arg1;
- (void)setContextPublisher:(id)arg1;
- (void)setHyperParameters:(id)arg1;
- (void)setUiPublisher:(id)arg1;
- (id)startDateForResults;
- (id)uiFeedbackPublisher;
- (id)uiFeedbackPublisherChain;
- (id)uiPublisher;

@end
