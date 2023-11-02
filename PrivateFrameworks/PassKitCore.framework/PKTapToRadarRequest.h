
@interface PKTapToRadarRequest : NSObject <NSSecureCoding> {
    NSString * _alertHeader;
    NSString * _alertMessage;
    NSString * _reason;
    NSString * _relatedRadar;
    bool  _serverGenerated;
}

@property (nonatomic, copy) NSString *alertHeader;
@property (nonatomic, copy) NSString *alertMessage;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *relatedRadar;
@property (getter=isServerGenerated, nonatomic) bool serverGenerated;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)alertHeader;
- (id)alertMessage;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isServerGenerated;
- (id)reason;
- (id)relatedRadar;
- (void)setAlertHeader:(id)arg1;
- (void)setAlertMessage:(id)arg1;
- (void)setReason:(id)arg1;
- (void)setRelatedRadar:(id)arg1;
- (void)setServerGenerated:(bool)arg1;

@end
