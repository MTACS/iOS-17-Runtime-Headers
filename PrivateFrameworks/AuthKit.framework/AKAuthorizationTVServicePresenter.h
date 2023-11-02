
@interface AKAuthorizationTVServicePresenter : NSObject

- (id)_filterDeprecatedType:(id)arg1;
- (id)_stringForType:(long long)arg1;
- (long long)_typeFromString:(id)arg1;
- (id)buildDidStartServerAuthorizationMessage;
- (id)buildDidTapNotificationMessage;
- (id)buildFetchAppIconMessage;
- (id)buildFetchAppIconReplyWithImageData:(id)arg1 imageScale:(id)arg2;
- (long long)typeOfMessage:(id)arg1;

@end
