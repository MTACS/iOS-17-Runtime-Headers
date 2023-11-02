
@interface TITypologyRecordSetOriginalInput : TITypologyRecord {
    NSString * _originalInput;
}

@property (nonatomic, copy) NSString *originalInput;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)applyToStatistic:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)originalInput;
- (void)setOriginalInput:(id)arg1;
- (id)shortDescription;

@end
