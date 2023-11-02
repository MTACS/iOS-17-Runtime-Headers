
@interface HKConceptQueryConfiguration : HKQueryServerConfiguration {
    HKConceptSelection * _selection;
}

@property (nonatomic, copy) HKConceptSelection *selection;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)selection;
- (void)setSelection:(id)arg1;

@end
