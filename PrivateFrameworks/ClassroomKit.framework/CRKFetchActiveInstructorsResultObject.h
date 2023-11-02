
@interface CRKFetchActiveInstructorsResultObject : CATTaskResultObject {
    NSArray * _instructors;
}

@property (nonatomic, retain) NSArray *instructors;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)instructors;
- (void)setInstructors:(id)arg1;

@end
