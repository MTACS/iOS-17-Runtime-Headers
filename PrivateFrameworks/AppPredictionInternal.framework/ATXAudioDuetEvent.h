
@interface ATXAudioDuetEvent : ATXDuetEvent <NSSecureCoding> {
    long long  _audioState;
    NSString * _deviceIdentifier;
    NSString * _portName;
    NSString * _portType;
    NSNumber * _routeChangeReason;
}

@property (nonatomic, readonly) long long audioState;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) NSString *portName;
@property (nonatomic, readonly) NSString *portType;
@property (nonatomic, readonly) NSNumber *routeChangeReason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)audioState;
- (bool)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5;
- (id)description;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithAudioState:(long long)arg1 deviceIdentifier:(id)arg2 portType:(id)arg3 portName:(id)arg4 routeChangeReason:(id)arg5 startDate:(id)arg6 endDate:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentContextStoreValues;
- (id)initWithDKEvent:(id)arg1;
- (id)portName;
- (id)portType;
- (id)routeChangeReason;

@end
