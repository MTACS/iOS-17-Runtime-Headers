
@interface CoreIDVShared.FuzzyMatchAssessment : NSObject <NSSecureCoding> {
    void dob;
    void firstName;
    void houseNumber;
    void lastName;
    void postalCode;
    void state;
    void street;
}

@property (nonatomic, readonly) NSString *debugDescription;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
