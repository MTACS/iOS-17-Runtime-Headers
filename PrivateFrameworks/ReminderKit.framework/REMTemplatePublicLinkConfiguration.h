
@interface REMTemplatePublicLinkConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _shouldIncludeAlarmTriggersBasedOnDateOrTimeInterval;
    bool  _shouldIncludeAlarmTriggersBasedOnLocationOrVehicle;
    bool  _shouldIncludeHashtags;
}

@property (nonatomic, readonly) bool shouldIncludeAlarmTriggersBasedOnDateOrTimeInterval;
@property (nonatomic, readonly) bool shouldIncludeAlarmTriggersBasedOnLocationOrVehicle;
@property (nonatomic, readonly) bool shouldIncludeContactsHandleData;
@property (nonatomic, readonly) bool shouldIncludeHashtags;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShouldIncludeHashtags:(bool)arg1 shouldIncludeAlarmTriggersBasedOnDateOrTimeInterval:(bool)arg2 shouldIncludeAlarmTriggersBasedOnLocationOrVehicle:(bool)arg3;
- (bool)isEqual:(id)arg1;
- (bool)shouldIncludeAlarmTriggersBasedOnDateOrTimeInterval;
- (bool)shouldIncludeAlarmTriggersBasedOnLocationOrVehicle;
- (bool)shouldIncludeContactsHandleData;
- (bool)shouldIncludeHashtags;

@end
