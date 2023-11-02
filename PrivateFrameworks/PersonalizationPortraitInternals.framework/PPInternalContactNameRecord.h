
@interface PPInternalContactNameRecord : PPContactNameRecord {
    NSString * _localizedFullName;
    PPPBContactNameRecord * _pbRecord;
}

- (void).cxx_destruct;
- (unsigned char)changeType;
- (id)cityNames;
- (id)clientCopy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)firstName;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 score:(double)arg2 source:(unsigned char)arg3 sourceIdentifier:(id)arg4 changeType:(unsigned char)arg5 firstName:(id)arg6 phoneticFirstName:(id)arg7 middleName:(id)arg8 phoneticMiddleName:(id)arg9 lastName:(id)arg10 phoneticLastName:(id)arg11 organizationName:(id)arg12 jobTitle:(id)arg13 nickname:(id)arg14 relatedNames:(id)arg15 streetNames:(id)arg16 cityNames:(id)arg17;
- (id)initWithPBContactNameRecord:(id)arg1;
- (id)jobTitle;
- (id)lastName;
- (id)localizedFullName;
- (id)middleName;
- (id)nickname;
- (id)organizationName;
- (id)pbRecord;
- (id)phoneticFirstName;
- (id)phoneticLastName;
- (id)phoneticMiddleName;
- (id)relatedNames;
- (double)score;
- (void)setScore:(double)arg1;
- (unsigned char)source;
- (id)sourceIdentifier;
- (id)streetNames;

@end
