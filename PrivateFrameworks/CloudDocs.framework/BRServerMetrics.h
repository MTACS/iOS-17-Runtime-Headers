
@interface BRServerMetrics : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _childCount;
    NSNumber * _quotaUsed;
    NSNumber * _recursiveChildCount;
    NSNumber * _sharedAliasRecursiveCount;
    NSNumber * _sharedByMeRecursiveCount;
}

@property (nonatomic, retain) NSNumber *childCount;
@property (nonatomic, retain) NSNumber *quotaUsed;
@property (nonatomic, retain) NSNumber *recursiveChildCount;
@property (nonatomic, retain) NSNumber *sharedAliasRecursiveCount;
@property (nonatomic, retain) NSNumber *sharedByMeRecursiveCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)childCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerMetrics:(id)arg1;
- (id)quotaUsed;
- (id)recursiveChildCount;
- (void)setChildCount:(id)arg1;
- (void)setQuotaUsed:(id)arg1;
- (void)setRecursiveChildCount:(id)arg1;
- (void)setSharedAliasRecursiveCount:(id)arg1;
- (void)setSharedByMeRecursiveCount:(id)arg1;
- (id)sharedAliasRecursiveCount;
- (id)sharedByMeRecursiveCount;

@end
