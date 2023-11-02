
@interface ATXWidgetDescriptorCacheMetadata : NSObject <NSSecureCoding> {
    NSString * _containerBundleId;
    bool  _hasAccessoryWidgetFamiliesOnly;
    bool  _hasHomeScreenWidgetFamiliesOnly;
    NSDate * _installDate;
}

@property (nonatomic, readonly) NSString *containerBundleId;
@property (nonatomic, readonly) bool hasAccessoryWidgetFamiliesOnly;
@property (nonatomic, readonly) bool hasHomeScreenWidgetFamiliesOnly;
@property (nonatomic, readonly) NSDate *installDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerBundleId;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAccessoryWidgetFamiliesOnly;
- (bool)hasHomeScreenWidgetFamiliesOnly;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstallDate:(id)arg1 containerBundleId:(id)arg2 hasHomeScreenWidgetFamiliesOnly:(bool)arg3 hasAccessoryWidgetFamiliesOnly:(bool)arg4;
- (id)installDate;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXWidgetDescriptorCacheMetadata:(id)arg1;

@end
