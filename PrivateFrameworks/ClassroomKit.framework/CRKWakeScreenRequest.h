
@interface CRKWakeScreenRequest : CATTaskRequest {
    bool  _shouldBecomeExclusive;
}

@property (nonatomic) bool shouldBecomeExclusive;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setShouldBecomeExclusive:(bool)arg1;
- (bool)shouldBecomeExclusive;

@end
