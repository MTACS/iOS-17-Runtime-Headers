
@interface IDSKTRegistrationStatusProvider : NSObject <NSSecureCoding> {
    NSDictionary * _ktApplicationToKTRegStatus;
}

@property (nonatomic, retain) NSDictionary *ktApplicationToKTRegStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)ktApplicationToKTRegStatus;
- (void)setKtApplicationToKTRegStatus:(id)arg1;
- (id)statusForKTApplication:(id)arg1;

@end
