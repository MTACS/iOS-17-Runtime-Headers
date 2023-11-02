
@protocol APRKContentKeyHelperDelegate

@required

- (void)contentKeyHelper:(APRKContentKeyHelper *)arg1 didGenerateSecureStopRecordPayload:(NSDictionary *)arg2;
- (void)contentKeyHelper:(APRKContentKeyHelper *)arg1 wantsToPerformContentKeyRequestWithDictionary:(NSDictionary *)arg2;

@end
