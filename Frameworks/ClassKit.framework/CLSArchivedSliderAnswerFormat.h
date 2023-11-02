
@interface CLSArchivedSliderAnswerFormat : CLSArchivedAnswerFormat <CLSRelationable> {
    NSString * _leadingValueLabel;
    long long  _maximum;
    NSString * _midValueLabel;
    long long  _minimum;
    NSString * _trailingValueLabel;
    long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *leadingValueLabel;
@property (nonatomic) long long maximum;
@property (nonatomic, copy) NSString *midValueLabel;
@property (nonatomic) long long minimum;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *trailingValueLabel;
@property (nonatomic, readonly) long long type;

+ (id)relations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)leadingValueLabel;
- (long long)maximum;
- (id)midValueLabel;
- (long long)minimum;
- (void)setLeadingValueLabel:(id)arg1;
- (void)setMaximum:(long long)arg1;
- (void)setMidValueLabel:(id)arg1;
- (void)setMinimum:(long long)arg1;
- (void)setTrailingValueLabel:(id)arg1;
- (void)setType:(long long)arg1;
- (id)trailingValueLabel;
- (long long)type;

@end
