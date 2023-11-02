
@interface ICPushNotificationsResponse : NSObject {
    long long  _statusCode;
}

@property (nonatomic, readonly) long long statusCode;

- (id)initWithResponseDictionary:(id)arg1;
- (long long)statusCode;

@end
