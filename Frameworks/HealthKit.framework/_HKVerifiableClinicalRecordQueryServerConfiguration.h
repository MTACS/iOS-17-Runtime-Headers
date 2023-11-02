
@interface _HKVerifiableClinicalRecordQueryServerConfiguration : HKQueryServerConfiguration {
    NSArray * _recordTypes;
    NSArray * _sourceTypes;
}

@property (nonatomic, copy) NSArray *recordTypes;
@property (nonatomic, copy) NSArray *sourceTypes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)recordTypes;
- (void)setRecordTypes:(id)arg1;
- (void)setSourceTypes:(id)arg1;
- (id)sourceTypes;

@end
