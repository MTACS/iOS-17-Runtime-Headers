
@interface TPSMiniTipMetadata : NSObject <NSCopying, NSSecureCoding> {
    TPSDocument * _content;
    long long  _customizationID;
    NSError * _error;
    TPSMonitoringEvents * _monitoringEvents;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) TPSDocument *content;
@property (nonatomic) long long customizationID;
@property (nonatomic, copy) NSError *error;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) TPSMonitoringEvents *monitoringEvents;
@property (nonatomic, copy) NSDictionary *userInfo;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)content;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)customizationID;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithContent:(id)arg1;
- (id)monitoringEvents;
- (void)setContent:(id)arg1;
- (void)setCustomizationID:(long long)arg1;
- (void)setError:(id)arg1;
- (void)setMonitoringEvents:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
