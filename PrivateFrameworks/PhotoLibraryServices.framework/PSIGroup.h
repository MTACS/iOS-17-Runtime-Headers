
@interface PSIGroup : PSIReusableObject {
    struct __CFArray { } * _assetIds;
    short  _category;
    struct __CFArray { } * _collectionIds;
    unsigned long long  _compressedRanges;
    NSMutableString * _contentString;
    unsigned long long  _groupId;
    struct __CFArray { } * _intersectedAssetIds;
    struct __CFArray { } * _intersectedCollectionIds;
    NSMutableString * _lookupIdentifier;
    unsigned long long  _matchTypeForQuery;
    NSMutableString * _normalizedString;
    unsigned long long  _owningGroupId;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _tokenRanges;
    unsigned long long  _tokenRangesCount;
}

@property (nonatomic, retain) struct __CFArray { }*assetIds;
@property (nonatomic) short category;
@property (nonatomic, retain) struct __CFArray { }*collectionIds;
@property (nonatomic, readonly) NSString *contentString;
@property (nonatomic) unsigned long long groupId;
@property (nonatomic, readonly, retain) struct __CFArray { }*intersectedAssetIds;
@property (nonatomic, readonly, retain) struct __CFArray { }*intersectedCollectionIds;
@property (nonatomic, readonly) NSString *lookupIdentifier;
@property (nonatomic) unsigned long long matchTypeForQuery;
@property (nonatomic, readonly) NSString *normalizedString;
@property (nonatomic) unsigned long long owningGroupId;

+ (void)_getTokenRanges:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 fromCompressedRanges:(unsigned long long)arg2;
+ (void)getCompressedRanges:(unsigned long long)arg1 fromTokenRanges:(struct { long long x1; long long x2; }*)arg2 count:(long long)arg3;

- (void).cxx_destruct;
- (int)_assetIdsCount;
- (int)_collectionIdsCount;
- (void)_resetTokenRangesForContentString;
- (id)_tokenRangesDescription;
- (void)_updateWithIntersectedAssetIds:(struct __CFArray { }*)arg1;
- (void)_updateWithIntersectedCollectionIds:(struct __CFArray { }*)arg1;
- (struct __CFArray { }*)assetIds;
- (short)category;
- (struct __CFArray { }*)collectionIds;
- (long long)compareToGroup:(id)arg1;
- (id)contentString;
- (void)dealloc;
- (id)description;
- (unsigned long long)groupId;
- (unsigned long long)groupIdForObjectLookup;
- (unsigned long long)hash;
- (id)init;
- (id)initWithContentString:(id)arg1 normalizedString:(id)arg2 lookupIdentifier:(id)arg3 category:(short)arg4 groupId:(unsigned long long)arg5 owningGroupId:(long long)arg6;
- (struct __CFArray { }*)intersectedAssetIds;
- (struct __CFArray { }*)intersectedCollectionIds;
- (bool)isEqual:(id)arg1;
- (bool)isExactMatchForQuery;
- (id)lookupIdentifier;
- (unsigned long long)matchTypeForQuery;
- (id)normalizedString;
- (unsigned long long)owningGroupId;
- (void)prepareForReuse;
- (void)prepareFromFilenameStatement:(struct sqlite3_stmt { }*)arg1;
- (void)prepareFromStatement:(struct sqlite3_stmt { }*)arg1;
- (void)setAssetIds:(struct __CFArray { }*)arg1;
- (void)setCategory:(short)arg1;
- (void)setCollectionIds:(struct __CFArray { }*)arg1;
- (void)setGroupId:(unsigned long long)arg1;
- (void)setMatchTypeForQuery:(unsigned long long)arg1;
- (void)setOwningGroupId:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tokenRangeAtIndex:(unsigned long long)arg1;
- (unsigned long long)tokenRangesCount;
- (void)unionCollectionIdsWithGroup:(id)arg1;
- (void)unionIdsWithGroup:(id)arg1;
- (void)updateWithIntersectedIds:(struct __CFArray { }*)arg1 searchResultType:(unsigned long long)arg2;

@end
