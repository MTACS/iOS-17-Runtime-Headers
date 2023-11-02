
@interface ATXDailyOverviewOptions : NSObject <NSSecureCoding> {
    long long  _focusFilter;
    bool  _isModernDashboardLayout;
}

@property (nonatomic, readonly) long long focusFilter;
@property (nonatomic, readonly) bool isModernDashboardLayout;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (long long)focusFilter;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFocusFilter:(long long)arg1 isModernDashboardLayout:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXDailyOverviewOptions:(id)arg1;
- (bool)isModernDashboardLayout;

@end
