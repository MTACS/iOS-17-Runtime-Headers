
@interface PFMetadataTypeVerifier : NSObject {
    NSDictionary * _expectedAVMetadataIdentifierTypes;
    NSDictionary * _expectedAVMetadataKeyKeySpaceTypes;
    NSDictionary * _expectedImageArrayPropertyTypes;
    NSDictionary * _expectedImageDictionaryPropertyTypes;
}

- (void).cxx_destruct;
- (id)_coerceValue:(id)arg1 toClass:(Class)arg2 forKey:(id)arg3;
- (id)_expectedAVMetadataIdentifierTypes;
- (id)_expectedAVMetadataKeyKeySpaceTypes;
- (id)_expectedImageArrayPropertyTypes;
- (id)_expectedImageDictionaryPropertyTypes;
- (id)_verifiedValue:(id)arg1 forKey:(id)arg2 expectedTypes:(id)arg3;
- (id)init;
- (id)valueAtIndex:(unsigned long long)arg1 forKey:(id)arg2 fromArray:(id)arg3;
- (id)valueForAVMetadataIdentifier:(id)arg1 fromAVMetadataItems:(id)arg2;
- (id)valueForKey:(id)arg1 fromProperties:(id)arg2;
- (id)valueForKey:(id)arg1 keySpace:(id)arg2 fromAVMetadataItems:(id)arg3;
- (id)valueForKeyPath:(id)arg1 fromProperties:(id)arg2;
- (id)valueForKeyPath:(id)arg1 index:(unsigned long long)arg2 fromProperties:(id)arg3;
- (id)verifiedImageValue:(id)arg1 forKey:(id)arg2;

@end
