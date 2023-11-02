
@protocol CKTranscriptSharingSuggestionDelegate <NSObject>

@required

- (void)transcriptSharingBannerWillDismiss:(CKTranscriptSharingSuggestion *)arg1;
- (void)transcriptStopSharingButtonTapped:(CKTranscriptSharingSuggestion *)arg1;

@end
