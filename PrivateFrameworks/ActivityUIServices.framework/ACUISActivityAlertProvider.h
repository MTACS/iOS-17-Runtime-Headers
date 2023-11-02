
@interface ACUISActivityAlertProvider : NSObject <ACUISActivityAlertProviding> {
    long long  _action;
    NSString * _activityIdentifier;
    ACUISActivityAlertOptions * _options;
    NSString * _payloadIdentifier;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, readonly, copy) NSString *activityIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) ACUISActivityAlertOptions *options;
@property (nonatomic, readonly, copy) NSString *payloadIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)_activityAlertAction:(long long)arg1;
- (long long)action;
- (id)activityIdentifier;
- (id)initWithActivityAlertProviding:(id)arg1;
- (id)options;
- (id)payloadIdentifier;

@end
