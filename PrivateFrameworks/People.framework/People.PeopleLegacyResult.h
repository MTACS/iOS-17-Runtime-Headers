
@interface People.PeopleLegacyResult : NSObject <NSSecureCoding> {
    void bundleID;
    void data;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
