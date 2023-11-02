
@interface CLSArchivedSurveyStep : CLSAbstractSurveyStep {
    long long  _type;
    long long  _version;
}

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setVersion:(long long)arg1;
- (long long)type;
- (long long)version;

@end
