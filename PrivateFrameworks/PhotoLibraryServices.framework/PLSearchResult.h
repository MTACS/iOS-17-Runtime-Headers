
@interface PLSearchResult : NSObject {
    PSIGroupResult * _groupResult;
}

@property (nonatomic, readonly) unsigned long long assetCount;
@property (nonatomic, readonly) unsigned long long categoryMask;
@property (nonatomic, readonly) NSArray *contentStrings;
@property (nonatomic, readonly) NSString *groupDescription;
@property (nonatomic, readonly) PSIGroupResult *groupResult;
@property (nonatomic, readonly) NSString *keyAssetUUID;
@property (nonatomic, readonly) NSArray *lookupIdentifiers;
@property (nonatomic, readonly) NSArray *matchRanges;
@property (readonly) NSString *owningContentString;
@property (nonatomic, readonly) NSArray *searchTokens;
@property (nonatomic, readonly) NSString *transientToken;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (unsigned long long)assetCount;
- (long long)categoryAtIndex:(long long)arg1;
- (unsigned long long)categoryMask;
- (id)contentStrings;
- (unsigned long long)groupCount;
- (id)groupDescription;
- (id)groupResult;
- (id)initWithGroupResult:(id)arg1;
- (bool)isContentStringTextSearchableAtIndex:(long long)arg1;
- (bool)isImplicitlyTokenized;
- (bool)isMatchedByIdentifierAtIndex:(long long)arg1;
- (bool)isSinglePersonOrPetResult;
- (id)keyAssetUUID;
- (id)lookupIdentifiers;
- (id)matchRanges;
- (id)matchRangesAtIndex:(long long)arg1;
- (id)owningContentString;
- (id)searchTokens;
- (id)tokensAtIndex:(long long)arg1;
- (id)transientToken;
- (unsigned long long)type;

@end
