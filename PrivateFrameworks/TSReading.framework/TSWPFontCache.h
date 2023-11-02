
@interface TSWPFontCache : NSObject {
    NSMutableArray * _cachedAvailableMembers;
    NSString * _cachedMembersFamilyName;
    NSMutableDictionary * _familyDisplayNames;
    NSArray * _familyFonts;
    NSArray * _familyNames;
    TSULRUCache * _fontCache;
}

+ (id)_singletonAlloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedCache;

- (struct __CTFont { }*)_createFontWithName:(id)arg1 size:(double)arg2 weight:(double)arg3;
- (id)autorelease;
- (id)availableMembersOfFontFamily:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct __CTFont { }*)createFontWithName:(id)arg1 size:(double)arg2 weight:(double)arg3 attributes:(id)arg4;
- (void)dealloc;
- (id)displayNameForFontFamily:(id)arg1;
- (id)init;
- (void)p_FontWasDownloaded:(id)arg1;
- (id)p_excludedFamilyNames;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;
- (id)sortedFontFamilies;
- (id)sortedFontFamilyEntriesForStylesheet:(id)arg1;

@end
