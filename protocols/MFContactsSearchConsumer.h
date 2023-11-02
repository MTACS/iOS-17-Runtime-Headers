
@protocol MFContactsSearchConsumer <NSObject>

@optional

- (void)beganNetworkActivity;
- (void)consumeAutocompleteSearchResults:(NSArray *)arg1 taskID:(NSNumber *)arg2;
- (void)consumeCorecipientSearchResults:(NSArray *)arg1 taskID:(NSNumber *)arg2;
- (void)endedNetworkActivity;
- (void)finishedSearchingForAutocompleteResults;
- (void)finishedSearchingForCorecipients;
- (void)finishedTaskWithID:(NSNumber *)arg1;

@end
