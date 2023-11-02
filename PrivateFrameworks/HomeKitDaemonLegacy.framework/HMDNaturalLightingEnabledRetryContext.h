
@interface HMDNaturalLightingEnabledRetryContext : HMFObject <NSCopying> {
    id /* block */  _completion;
    bool  _naturalLightingEnabled;
    unsigned long long  _retryCount;
}

@property (readonly) id /* block */ completion;
@property (readonly) bool naturalLightingEnabled;
@property unsigned long long retryCount;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id /* block */)completion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithNaturalLightingEnabled:(bool)arg1 completion:(id /* block */)arg2 retryCount:(unsigned long long)arg3;
- (bool)naturalLightingEnabled;
- (unsigned long long)retryCount;
- (void)setRetryCount:(unsigned long long)arg1;

@end
