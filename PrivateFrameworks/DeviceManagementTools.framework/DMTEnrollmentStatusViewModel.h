
@interface DMTEnrollmentStatusViewModel : NSObject <NSSecureCoding> {
    NSString * _detailText;
    NSString * _statusMessage;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *detailText;
@property (nonatomic, readonly, copy) NSString *statusMessage;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)detailTextWithOrganizationName:(id)arg1 organizationType:(long long)arg2 localizedDeviceClass:(id)arg3;
+ (id)statusMessageForEnrollmentState:(long long)arg1 networkName:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)titleWithLocalizedDeviceClass:(id)arg1;

- (void).cxx_destruct;
- (id)detailText;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOrganizationName:(id)arg1 organizationType:(long long)arg2 localizedDeviceClass:(id)arg3 enrollmentState:(long long)arg4 networkName:(id)arg5;
- (id)statusMessage;
- (id)title;

@end
