
@interface IRCandidatesContainerDO : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _candidates;
}

@property (nonatomic, readonly) NSSet *candidates;

+ (id)candidatesContainerDOWithCandidates:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)candidateNameForCandidateIdentifier:(id)arg1;
- (id)candidates;
- (id)copyWithReplacementCandidates:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)exportAsDictionary;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCandidates:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCandidatesContainerDO:(id)arg1;
- (id)validForPredictionCandidates;

@end
