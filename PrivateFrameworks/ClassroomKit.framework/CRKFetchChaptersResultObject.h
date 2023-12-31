
@interface CRKFetchChaptersResultObject : CATTaskResultObject {
    NSArray * _chapters;
}

@property (nonatomic, copy) NSArray *chapters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)chapters;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setChapters:(id)arg1;

@end
