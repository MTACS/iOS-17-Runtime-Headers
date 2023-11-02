
@interface IRContext : NSObject <NSCopying, NSSecureCoding> {
    NSString * _contextIdentifier;
    NSMutableSet * _internalCandidateResults;
}

@property (nonatomic, readonly, copy) NSSet *candidateResults;
@property (nonatomic, readonly) NSString *contextIdentifier;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addCandidateResult:(id)arg1;
- (id)candidateResults;
- (id)contextIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
