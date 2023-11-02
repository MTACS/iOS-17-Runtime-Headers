
@interface DMTEnrollmentCompletionViewModel : NSObject <NSSecureCoding> {
    NSString * _buttonTitle;
    NSString * _detailText;
    NSString * _linkButtonTitle;
    NSString * _symbolName;
    NSString * _title;
    NSString * _verboseDescriptionText;
}

@property (nonatomic, readonly, copy) NSString *buttonTitle;
@property (nonatomic, readonly, copy) NSString *detailText;
@property (nonatomic, readonly) bool hasVerboseDescription;
@property (nonatomic, readonly, copy) NSString *linkButtonTitle;
@property (nonatomic, readonly, copy) NSString *symbolName;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSString *verboseDescriptionText;

+ (id)detailTextForEnrollmentFailureWithLocalizedDeviceClass:(id)arg1;
+ (id)detailTextForSuccessfulEnrollmentWithLocalizedDeviceClass:(id)arg1 organizationName:(id)arg2 organizationType:(long long)arg3 mdmServerName:(id)arg4;
+ (id)linkButtonTitle;
+ (bool)supportsSecureCoding;
+ (id)symbolNameForEnrollmentFailure;
+ (id)symbolNameForSuccessfulEnrollment;
+ (id)titleForEnrollmentFailureWithLocalizedDeviceClass:(id)arg1;
+ (id)verboseDescriptionTextForError:(id)arg1;

- (void).cxx_destruct;
- (id)buttonTitle;
- (id)detailText;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasVerboseDescription;
- (id)initForEnrollmentFailureWithError:(id)arg1 localizedDeviceClass:(id)arg2;
- (id)initSuccessfulEnrollmentInOrganizationName:(id)arg1 organizationType:(long long)arg2 mdmServerName:(id)arg3 localizedDeviceClass:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)linkButtonTitle;
- (id)symbolName;
- (id)title;
- (id)verboseDescriptionText;

@end
