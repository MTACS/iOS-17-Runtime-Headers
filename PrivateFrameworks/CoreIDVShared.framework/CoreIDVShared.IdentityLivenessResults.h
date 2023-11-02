
@interface CoreIDVShared.IdentityLivenessResults : NSObject <NSSecureCoding> {
    void assessmentID;
    void assessmentTA;
    void assessmentsFAC;
    void assessmentsPRD;
    void ignoredStitches;
    void livenessLabel;
    void luxValues;
    void maxNccHigh;
    void maxNccLow;
    void metrics;
    void timestampsButtonPressed;
    void timestampsFAC;
    void timestampsID;
}

@property (nonatomic, readonly) NSString *debugDescription;

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
