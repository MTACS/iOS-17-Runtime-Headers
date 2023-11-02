
@interface _UIPhysicalButtonMutableConfigurationSet : _UIPhysicalButtonConfigurationSet {
    unsigned long long  _mutationDetector;
}

+ (id)new;

- (void)_setConfiguration:(id)arg1 forButton:(unsigned long long)arg2;
- (void)_unionWithConfigurationSet:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)init;

@end
