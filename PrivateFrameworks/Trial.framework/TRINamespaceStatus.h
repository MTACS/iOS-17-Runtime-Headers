
@interface TRINamespaceStatus : NSObject <NSCopying, NSSecureCoding> {
    unsigned int  _compatibilityVersion;
    NSDate * _lastFetchAttempt;
    bool  _lastFetchWasSuccess;
    NSString * _namespaceName;
}

@property (nonatomic, readonly) unsigned int compatibilityVersion;
@property (nonatomic, readonly) NSDate *lastFetchAttempt;
@property (nonatomic, readonly) bool lastFetchWasSuccess;
@property (nonatomic, readonly) NSString *namespaceName;

+ (id)statusFromData:(id)arg1;
+ (id)statusWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned int)arg2 lastFetchAttempt:(id)arg3 lastFetchWasSuccess:(bool)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)asData;
- (unsigned int)compatibilityVersion;
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)arg1;
- (id)copyWithReplacementLastFetchAttempt:(id)arg1;
- (id)copyWithReplacementLastFetchWasSuccess:(bool)arg1;
- (id)copyWithReplacementNamespaceName:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned int)arg2 lastFetchAttempt:(id)arg3 lastFetchWasSuccess:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStatus:(id)arg1;
- (id)lastFetchAttempt;
- (bool)lastFetchWasSuccess;
- (id)namespaceName;

@end
