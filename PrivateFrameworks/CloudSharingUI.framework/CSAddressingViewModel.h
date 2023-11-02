
@interface CSAddressingViewModel : NSObject <NSSecureCoding> {
    NSData * _headerImageData;
    NSString * _headerTitle;
    NSString * _loadingText;
    NSString * _primaryButtonText;
    NSString * _secondaryButtonText;
    NSString * _supplementaryText;
    NSString * _userInfoText;
}

@property (nonatomic, retain) NSData *headerImageData;
@property (nonatomic, retain) NSString *headerTitle;
@property (nonatomic, retain) NSString *loadingText;
@property (nonatomic, retain) NSString *primaryButtonText;
@property (nonatomic, retain) NSString *secondaryButtonText;
@property (nonatomic, retain) NSString *supplementaryText;
@property (nonatomic, retain) NSString *userInfoText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)headerImageData;
- (id)headerTitle;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeaderImageData:(id)arg1 headerTitle:(id)arg2 loadingText:(id)arg3 supplementaryText:(id)arg4 userInfoText:(id)arg5 primaryButtonText:(id)arg6 secondaryButtonText:(id)arg7;
- (id)loadingText;
- (id)primaryButtonText;
- (id)secondaryButtonText;
- (void)setHeaderImageData:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (void)setLoadingText:(id)arg1;
- (void)setPrimaryButtonText:(id)arg1;
- (void)setSecondaryButtonText:(id)arg1;
- (void)setSupplementaryText:(id)arg1;
- (void)setUserInfoText:(id)arg1;
- (id)supplementaryText;
- (id)userInfoText;

@end
