
@interface PPClientContactNameRecord : PPContactNameRecord {
    unsigned char  _changeType;
    NSArray * _cityNames;
    NSString * _firstName;
    NSString * _identifier;
    NSString * _jobTitle;
    NSString * _lastName;
    NSString * _middleName;
    NSString * _nickname;
    NSString * _organizationName;
    NSString * _phoneticFirstName;
    NSString * _phoneticLastName;
    NSString * _phoneticMiddleName;
    NSDictionary * _relatedNames;
    double  _score;
    unsigned char  _source;
    NSString * _sourceIdentifier;
    NSArray * _streetNames;
}

- (void).cxx_destruct;
- (unsigned char)changeType;
- (id)cityNames;
- (id)firstName;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 source:(unsigned char)arg3 sourceIdentifier:(id)arg4 changeType:(unsigned char)arg5 firstName:(id)arg6 phoneticFirstName:(id)arg7 middleName:(id)arg8 phoneticMiddleName:(id)arg9 lastName:(id)arg10 phoneticLastName:(id)arg11 organizationName:(id)arg12 jobTitle:(id)arg13 nickname:(id)arg14 relatedNames:(id)arg15 streetNames:(id)arg16 cityNames:(id)arg17;
- (id)jobTitle;
- (id)lastName;
- (id)middleName;
- (id)nickname;
- (id)organizationName;
- (id)phoneticFirstName;
- (id)phoneticLastName;
- (id)phoneticMiddleName;
- (id)relatedNames;
- (double)score;
- (unsigned char)source;
- (id)sourceIdentifier;
- (id)streetNames;

@end
