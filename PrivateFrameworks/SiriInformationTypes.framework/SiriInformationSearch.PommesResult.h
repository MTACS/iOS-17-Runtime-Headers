
@interface SiriInformationSearch.PommesResult : NSObject <NSSecureCoding> {
    void domain;
    void metadata;
    void resultId;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
