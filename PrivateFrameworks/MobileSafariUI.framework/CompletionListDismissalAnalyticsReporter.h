
@interface CompletionListDismissalAnalyticsReporter : NSObject {
    bool  _acceptedCompletionListItem;
    bool  _goKeyTapped;
    long long  _unifiedFieldContentType;
}

@property (nonatomic) bool acceptedCompletionListItem;
@property (nonatomic) long long unifiedFieldContentType;

- (bool)acceptedCompletionListItem;
- (void)reportAnalytics;
- (void)setAcceptedCompletionListItem:(bool)arg1;
- (void)setUnifiedFieldContentType:(long long)arg1;
- (long long)unifiedFieldContentType;

@end
