
@interface HKMCAnalysisQueryConfiguration : HKQueryServerConfiguration {
    bool  _forceAnalysis;
}

@property (nonatomic) bool forceAnalysis;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)forceAnalysis;
- (id)initWithCoder:(id)arg1;
- (void)setForceAnalysis:(bool)arg1;

@end
