
@protocol CKXBinding

@required

- (Class)mutableProxyClassForStructToken:(unsigned long long)arg1;
- (<CKXORCHelpers> *)orcHelpers;
- (Class)proxyClassForStructToken:(unsigned long long)arg1;
- (CKXSchema *)schema;
- (unsigned long long)structTokenForClass:(Class)arg1;
- (unsigned long long)topLevelStructToken;

@end
