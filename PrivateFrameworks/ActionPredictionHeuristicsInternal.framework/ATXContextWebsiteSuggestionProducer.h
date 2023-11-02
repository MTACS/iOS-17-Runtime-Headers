
@interface ATXContextWebsiteSuggestionProducer : NSObject {
    long long  _reasonCode;
    double  _score;
    NSDateInterval * _validDateInterval;
}

- (void).cxx_destruct;
- (id)_suggestionWithWebsite:(id)arg1 titlesAndSubtitles:(id)arg2;
- (id)initWithValidDateInterval:(id)arg1 reasonCode:(long long)arg2 score:(double)arg3;
- (id)titleAndSubtitleForUrl:(id)arg1 titlesAndSubtitles:(id)arg2;
- (id)websiteSuggestions;

@end
