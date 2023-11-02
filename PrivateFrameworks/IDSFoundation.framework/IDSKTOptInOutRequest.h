
@interface IDSKTOptInOutRequest : NSObject <NSSecureCoding> {
    NSDictionary * _applicationsToOptInStatusData;
}

@property (nonatomic, retain) NSDictionary *applicationsToOptInStatusData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationsToOptInStatusData;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setApplicationsToOptInStatusData:(id)arg1;

@end
