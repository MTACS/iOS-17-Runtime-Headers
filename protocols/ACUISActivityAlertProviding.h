
@protocol ACUISActivityAlertProviding <NSObject>

@required

- (long long)action;
- (NSString *)activityIdentifier;
- (ACUISActivityAlertOptions *)options;
- (NSString *)payloadIdentifier;

@end
