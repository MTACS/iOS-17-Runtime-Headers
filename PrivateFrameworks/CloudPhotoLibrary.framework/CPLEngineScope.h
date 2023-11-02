
@interface CPLEngineScope : NSObject <NSCopying, NSSecureCoding> {
    long long  _cloudIndex;
    NSDate * _creationDate;
    long long  _localIndex;
    NSString * _scopeIdentifier;
    long long  _scopeType;
    long long  _stableIndex;
}

@property (nonatomic) long long cloudIndex;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic) long long localIndex;
@property (nonatomic, readonly) NSString *scopeIdentifier;
@property (nonatomic, readonly) long long scopeType;
@property (nonatomic) long long stableIndex;

+ (void)formatStatusDictionary:(id)arg1 forScopeWithIdentifier:(id)arg2 appendString:(id /* block */)arg3 appendTopLevelStatus:(id /* block */)arg4 appendLineStatus:(id /* block */)arg5;
+ (id)separatorForStatusKey:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)cloudIndex;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithScopeIdentifier:(id)arg1 scopeType:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (long long)localIndex;
- (id)redactedDescription;
- (id)scopeIdentifier;
- (long long)scopeType;
- (void)setCloudIndex:(long long)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setLocalIndex:(long long)arg1;
- (void)setStableIndex:(long long)arg1;
- (long long)stableIndex;
- (id)statusDescription;

@end
