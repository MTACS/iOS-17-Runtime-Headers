
@interface MSParsecSearchSessionInstantAnswer : MSParsecSearchSessionMessageResult {
    SFCard * _inlineCard;
    bool  _isInstantAnswerUpdated;
}

@property (nonatomic, readonly) SFCard *inlineCard;
@property (nonatomic, readonly) bool isInstantAnswerUpdated;

+ (id)instantAnswerWithIdentifier:(id)arg1 date:(id)arg2 inlineCard:(id)arg3 isInstantAnswerUpdated:(bool)arg4;

- (void).cxx_destruct;
- (id)feedbackResult;
- (id)initWithIdentifier:(id)arg1 date:(id)arg2 inlineCard:(id)arg3 isInstantAnswerUpdated:(bool)arg4;
- (id)inlineCard;
- (bool)isInstantAnswerUpdated;

@end
