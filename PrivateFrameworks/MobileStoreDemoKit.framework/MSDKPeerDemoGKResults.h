
@interface MSDKPeerDemoGKResults : NSObject <NSSecureCoding> {
    bool  _enrollmentResult;
    NSArray * _residualErrors;
}

@property (nonatomic) bool enrollmentResult;
@property (nonatomic, retain) NSArray *residualErrors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)enrollmentResult;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnrollmentResult:(bool)arg1 andResidualErrors:(id)arg2;
- (id)residualErrors;
- (void)setEnrollmentResult:(bool)arg1;
- (void)setResidualErrors:(id)arg1;

@end
