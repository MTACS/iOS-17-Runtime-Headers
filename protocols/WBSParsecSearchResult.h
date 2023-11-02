
@protocol WBSParsecSearchResult

@required

- (WBSParsecActionButton *)actionButton;
- (NSURL *)appPunchoutURL;
- (NSString *)completion;
- (WBSParsecImageRepresentation *)completionIcon;
- (UIImage *)completionIconWithSession:(id <WBSParsecSearchSession>)arg1;
- (NSString *)descriptionText;
- (NSString *)feedbackIdentifier;
- (WBSParsecImageRepresentation *)icon;
- (UIImage *)iconWithSession:(id <WBSParsecSearchSession>)arg1;
- (NSString *)identifier;
- (bool)isPredictionFromServerMatchingUserTypedQuery:(WBSCompletionQuery *)arg1;
- (MKMapItem *)mapItem;
- (NSString *)mediaKind;
- (unsigned long long)minimumRankOfTopHitToSuppressResult;
- (NSString *)query;
- (NSString *)referrerForLoadingResult;
- (NSString *)sectionBundleIdentifier;
- (NSString *)sectionHeader;
- (NSString *)title;
- (NSString *)urlString;

@end
