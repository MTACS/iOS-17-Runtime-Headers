
@interface SiriInformationSearch.PommesRenderOptions : NSObject <NSSecureCoding> {
    void isImmersiveExperience;
    void isPhoneCallActive;
    void isSquawkResponse;
    void preserveResultSpaceIfPossible;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  switchProfile;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
