
@interface MLTransactionContext : NSObject <NSSecureCoding> {
    unsigned long long  _options;
    NSString * _path;
    unsigned long long  _priorityLevel;
    ML3DatabasePrivacyContext * _privacyContext;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly, copy) NSString *path;
@property (nonatomic, readonly) unsigned long long priorityLevel;
@property (nonatomic, readonly) ML3DatabasePrivacyContext *privacyContext;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPrivacyContext:(id)arg1 path:(id)arg2 priorityLevel:(unsigned long long)arg3 options:(unsigned long long)arg4;
- (unsigned long long)options;
- (id)path;
- (unsigned long long)priorityLevel;
- (id)privacyContext;

@end
