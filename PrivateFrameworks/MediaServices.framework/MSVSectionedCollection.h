
@interface MSVSectionedCollection : NSObject <NSCopying, NSMutableCopying, NSObject, NSSecureCoding> {
    NSArray * _sectionedItems;
    NSArray * _sections;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) id firstItem;
@property (nonatomic, readonly) id firstSection;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id lastItem;
@property (nonatomic, readonly) id lastSection;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long totalItemCount;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

+ (Class)msv_immutableClass;
+ (Class)msv_mutableClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_initializeAsEmptySectionedCollection;
- (id)_stateDumpObject;
- (id)allItems;
- (id)allSections;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateItemsInSectionAtIndex:(long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateItemsUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionsUsingBlock:(id /* block */)arg1;
- (id)firstItem;
- (id)firstSection;
- (long long)globalIndexForIndexPath:(id)arg1;
- (bool)hasSameContentAsSectionedCollection:(id)arg1;
- (id)indexPathForGlobalIndex:(long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)itemAtIndexPath:(id)arg1;
- (id)itemsInSectionAtIndex:(long long)arg1;
- (id)lastItem;
- (id)lastSection;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)reverseEnumerateSectionsUsingBlock:(id /* block */)arg1;
- (id)sectionAtIndex:(long long)arg1;
- (long long)totalItemCount;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

- (id)changeDetailsToSectionedCollection:(id)arg1 applyingUIKitWorkarounds:(bool)arg2 isEqualBlock:(id /* block */)arg3 isUpdatedBlock:(id /* block */)arg4;
- (id)changeDetailsToSectionedCollection:(id)arg1 isEqualBlock:(id /* block */)arg2 isUpdatedBlock:(id /* block */)arg3;
- (void)enumerateItemIdentifiersInSectionAtIndex:(long long)arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateItemIdentifiersUsingBlock:(id /* block */)arg1;
- (void)enumerateSectionIdentifiersUsingBlock:(id /* block */)arg1;
- (id)identifiersForItemAtIndexPath:(id)arg1;
- (id)identifiersForSectionAtIndex:(long long)arg1;
- (id)indexPathForItemWithIdentifiersIntersectingSet:(id)arg1;

@end
