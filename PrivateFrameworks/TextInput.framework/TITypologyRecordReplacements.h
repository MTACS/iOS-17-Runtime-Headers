
@interface TITypologyRecordReplacements : TITypologyRecord {
    NSArray * _candidates;
    TIKeyboardLayout * _keyLayout;
    NSString * _string;
}

@property (nonatomic, retain) NSArray *candidates;
@property (nonatomic, retain) TIKeyboardLayout *keyLayout;
@property (nonatomic, copy) NSString *string;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToStatistic:(id)arg1;
- (id)candidates;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyLayout;
- (void)setCandidates:(id)arg1;
- (void)setKeyLayout:(id)arg1;
- (void)setString:(id)arg1;
- (id)shortDescription;
- (id)string;

@end
