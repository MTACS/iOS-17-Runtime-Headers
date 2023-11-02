
@interface FCEphemeralAssetKeyCache : NSObject <FCAssetKeyCacheType> {
    FCThreadSafeMutableDictionary * _dictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)init;
- (id)interestTokenForWrappingKeyIDs:(id)arg1;
- (void)removeAllWrappingKeys;
- (void)setWrappingKey:(id)arg1 forWrappingKeyID:(id)arg2;
- (id)wrappingKeyForWrappingKeyID:(id)arg1;

@end
