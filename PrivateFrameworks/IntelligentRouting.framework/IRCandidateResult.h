
@interface IRCandidateResult : NSObject <NSCopying, NSSecureCoding> {
    IRCandidate * _candidate;
    long long  _classification;
    NSString * _classificationDescription;
    NSNumber * _sortingHint;
}

@property (nonatomic, readonly) IRCandidate *candidate;
@property (nonatomic, readonly) long long classification;
@property (nonatomic, readonly) NSString *classificationDescription;
@property (nonatomic, retain) NSNumber *sortingHint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)candidate;
- (long long)classification;
- (id)classificationDescription;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCandidate:(id)arg1 classification:(long long)arg2 andClassificationDescription:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setClassification:(long long)arg1 withDescription:(id)arg2;
- (void)setSortingHint:(id)arg1;
- (id)sortingHint;

@end
