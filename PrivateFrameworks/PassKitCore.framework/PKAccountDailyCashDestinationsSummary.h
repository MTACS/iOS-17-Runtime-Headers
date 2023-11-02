
@interface PKAccountDailyCashDestinationsSummary : NSObject <NSSecureCoding> {
    NSArray * _destinations;
    NSString * _localizedFooterText;
    NSString * _localizedTitle;
}

@property (nonatomic, readonly) NSArray *destinations;
@property (nonatomic, readonly) NSString *localizedFooterText;
@property (nonatomic, readonly) NSString *localizedTitle;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)destinations;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDestinations:(id)arg1 localizedTitle:(id)arg2 localizedFooterText:(id)arg3;
- (id)localizedFooterText;
- (id)localizedTitle;

@end
