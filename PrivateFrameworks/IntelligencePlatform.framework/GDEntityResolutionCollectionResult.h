
@interface GDEntityResolutionCollectionResult : NSObject <NSSecureCoding> {
    NSArray * _candidates;
}

@property (nonatomic, readonly, copy) NSArray *candidates;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)candidates;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCandidates:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
