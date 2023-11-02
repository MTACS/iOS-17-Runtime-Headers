
@interface ASDBetaAppFeedbackMetadata : NSObject <NSSecureCoding> {
    NSString * _email;
    NSString * _incidentID;
    ASDBetaAppVersion * _version;
}

@property (copy) NSString *email;
@property (copy) NSString *incidentID;
@property (copy) ASDBetaAppVersion *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (id)incidentID;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setIncidentID:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)version;

@end
