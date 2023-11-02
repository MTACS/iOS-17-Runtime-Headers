
@interface REMListsDataViewInvocation_fetchDefaultList : REMStoreInvocation <NSSecureCoding> {
    bool  _debug_useInMemoryPreferredDefaultListStorage;
}

@property (nonatomic) bool debug_useInMemoryPreferredDefaultListStorage;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)debug_useInMemoryPreferredDefaultListStorage;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDebugUseInMemoryPreferredDefaultListStorage:(bool)arg1;
- (bool)isEqual:(id)arg1;
- (void)setDebug_useInMemoryPreferredDefaultListStorage:(bool)arg1;

@end
