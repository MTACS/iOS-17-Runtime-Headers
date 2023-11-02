
@interface NSIndexPath : NSObject <EFPubliclyDescribable, NSCopying, NSSecureCoding, _PASDistilledString> {
    unsigned long long * _indexes;
    unsigned long long  _inlinePayload;
    unsigned long long  _length;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *ef_publicDescription;
@property (nonatomic, readonly) unsigned long long element;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long item;
@property (readonly) unsigned long long length;
@property (nonatomic, readonly) long long msv_item;
@property (nonatomic, readonly) long long msv_section;
@property (nonatomic, readonly) long long na_item;
@property (nonatomic, readonly) long long na_row;
@property (nonatomic, readonly) long long na_section;
@property (getter=pu_isValid, nonatomic, readonly) bool pu_valid;
@property (nonatomic, readonly) long long px_item;
@property (nonatomic, readonly) long long px_kind;
@property (nonatomic, readonly) long long px_section;
@property (nonatomic, readonly) long long row;
@property (nonatomic, readonly) long long section;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long tier;
@property (nonatomic, readonly) long long tk_row;
@property (nonatomic, readonly) long long tk_section;
@property (nonatomic, readonly) long long upNextSection;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (id)indexPath;
+ (id)indexPathWithIndex:(unsigned long long)arg1;
+ (id)indexPathWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2;
+ (void)initialize;
+ (bool)supportsSecureCoding;

- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getIndexes:(unsigned long long*)arg1;
- (void)getIndexes:(unsigned long long*)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)hash;
- (unsigned long long)indexAtPosition:(unsigned long long)arg1;
- (id)indexPathByAddingIndex:(unsigned long long)arg1;
- (id)indexPathByRemovingLastIndex;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIndex:(unsigned long long)arg1;
- (id)initWithIndexes:(const unsigned long long*)arg1 length:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;

// Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI

+ (id)indexPathForNavigationListItemIndex:(long long)arg1;

// Image: /System/Library/Frameworks/MusicKit.framework/MusicKit

+ (id)musicKit_indexPathForItem:(long long)arg1 inSection:(long long)arg2;

// Image: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit

+ (id)indexPathForItem:(long long)arg1 inTier:(long long)arg2;

- (long long)tier;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_emptyPath;

- (bool)bs_hasPrefix:(id)arg1;
- (id)bs_indexPathByAddingPrefix:(id)arg1;
- (id)bs_indexPathByRemovingFirstIndex;
- (id)bs_nearestCommonAncestorWithIndexPath:(id)arg1;
- (id)bs_subpathFromPosition:(unsigned long long)arg1;
- (id)bs_subpathWithRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

// Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit

- (id)__ck_indexPathShiftedForInsertedIndexes:(id)arg1 deletedIndexes:(id)arg2;

// Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI

- (id)dd_stringValue;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (bool)_gkIsGlobal;

// Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI

- (id)description;
- (id)ef_publicDescription;

// Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

+ (id)msv_indexPathForItem:(long long)arg1 inSection:(long long)arg2;

- (long long)msv_item;
- (long long)msv_section;

// Image: /System/Library/PrivateFrameworks/NanoTimeKit.framework/NanoTimeKit

+ (id)indexPathWithElement:(unsigned long long)arg1 inUpNextSection:(long long)arg2;

- (unsigned long long)element;
- (long long)upNextSection;

// Image: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities

+ (id)na_indexPathForItem:(long long)arg1 inSection:(long long)arg2;
+ (id)na_indexPathForRow:(long long)arg1 inSection:(long long)arg2;

- (void)na_each:(id /* block */)arg1;
- (id)na_indexPathStartingAtPosition:(unsigned long long)arg1;
- (long long)na_item;
- (long long)na_row;
- (long long)na_section;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

+ (id)px_indexPathForItem:(long long)arg1 inSection:(long long)arg2;
+ (id)px_indexPathForItem:(long long)arg1 inSection:(long long)arg2 withKind:(long long)arg3;
+ (id)px_indexPathsForItems:(id)arg1 inSection:(long long)arg2;

- (id)px_alteredIndexPathAfterDeletingItemAtIndexPath:(id)arg1;
- (id)px_alteredIndexPathAfterDeletingItemsAtIndexPaths:(id)arg1;
- (id)px_alteredIndexPathAfterInsertingItemAtIndexPath:(id)arg1;
- (id)px_alteredIndexPathAfterInsertingItemsAtIndexPaths:(id)arg1;
- (id)px_alteredIndexPathAfterMovingItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)px_indexPathAfterDeletingItemAtIndexPath:(id)arg1;
- (id)px_indexPathAfterInsertingItemAtIndexPath:(id)arg1;
- (id)px_indexPathByChangingIndexAtPosition:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (long long)px_item;
- (long long)px_kind;
- (long long)px_section;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

+ (id)pu_indexPathForItem:(long long)arg1 inSubSection:(long long)arg2 section:(long long)arg3;
+ (id)pu_indexPathsForItems:(id)arg1 inSection:(long long)arg2;
+ (id)pu_rootIndexPath;

- (id)pu_alteredIndexPathAfterDeletingItemAtIndexPath:(id)arg1;
- (id)pu_alteredIndexPathAfterDeletingItemsAtIndexPaths:(id)arg1;
- (id)pu_alteredIndexPathAfterInsertingItemAtIndexPath:(id)arg1;
- (id)pu_alteredIndexPathAfterInsertingItemsAtIndexPaths:(id)arg1;
- (id)pu_alteredIndexPathAfterMovingItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)pu_indexPathAfterDeletingItemAtIndexPath:(id)arg1;
- (id)pu_indexPathAfterInsertingItemAtIndexPath:(id)arg1;
- (id)pu_indexPathAfterMovingItemFromIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)pu_indexPathAfterReloadingItemAtIndexPath:(id)arg1;
- (id)pu_indexPathByAppendingIndexPath:(id)arg1;
- (id)pu_indexPathByChangingIndexAtPosition:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (bool)pu_isParentOfIndexPath:(id)arg1;
- (bool)pu_isValid;
- (id)pu_shortDescription;

// Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport

+ (id)_pas_fromVersionString:(id)arg1;
+ (id)_pas_fromVersionString:(id)arg1 withExceptions:(bool)arg2;
+ (id)_pas_fromVersionStringIfPossible:(id)arg1;

- (id)_pas_asVersionString;
- (bool)_pas_isEqualToVersionString:(id)arg1;
- (bool)_pas_isGreaterThanOrEqualToVersionString:(id)arg1;
- (bool)_pas_isGreaterThanVersionString:(id)arg1;
- (bool)_pas_isLessThanOrEqualToVersionString:(id)arg1;
- (bool)_pas_isLessThanVersionString:(id)arg1;
- (id)_pas_revivedString;

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

+ (id)pt_indexPathForRow:(long long)arg1 inSection:(long long)arg2;

- (long long)pt_row;
- (long long)pt_section;

// Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore

- (id)indexPathByConcatenatingIndexPath:(id)arg1;
- (id)indexPathByInsertingFirstIndex:(unsigned long long)arg1;
- (id)initWithString:(id)arg1;
- (id)stringValue;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

+ (id)indexPathWithFolderIconIndex:(unsigned long long)arg1 folderListIndex:(unsigned long long)arg2 iconIndex:(unsigned long long)arg3 listIndex:(unsigned long long)arg4;
+ (id)indexPathWithIconIndex:(unsigned long long)arg1 listIndex:(unsigned long long)arg2;
+ (id)sb_indexPathWithFolderIconIndex:(unsigned long long)arg1 folderListIndex:(unsigned long long)arg2 listIndex:(unsigned long long)arg3;
+ (id)sb_indexPathWithListIndex:(unsigned long long)arg1;

- (unsigned long long)sbIconIndex;
- (unsigned long long)sbListIndex;
- (unsigned long long)sb_firstIconIndex;
- (id)sb_firstIconPathComponent;
- (unsigned long long)sb_firstListIndex;
- (unsigned long long)sb_iconPathCount;
- (id)sb_iconPathDescription;
- (id)sb_iconRelativePathComponents;
- (id)sb_indexPathByAddingIndexPath:(id)arg1;
- (id)sb_indexPathByAddingPathComponentWithListIndex:(unsigned long long)arg1 iconIndex:(unsigned long long)arg2;
- (id)sb_indexPathByRemovingFirstIconPathComponent;
- (id)sb_indexPathByRemovingLastIconIndex;
- (id)sb_indexPathByRemovingLastIconPathComponent;
- (id)sb_indexPathByReplacingLastIconIndex:(unsigned long long)arg1;
- (bool)sb_isOnSameListAsIndexPath:(id)arg1;
- (unsigned long long)sb_lastIconIndex;
- (id)sb_lastIconPathComponent;
- (unsigned long long)sb_lastListIndex;

// Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit

- (long long)flattenedIndexForItemInSections:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ToneKit.framework/ToneKit

+ (id)tk_indexPathForRow:(long long)arg1 inSection:(long long)arg2;

- (long long)tk_row;
- (long long)tk_section;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)indexPathForItem:(long long)arg1 inSection:(long long)arg2;
+ (id)indexPathForRow:(long long)arg1 inSection:(long long)arg2;

- (id)_ui_shortDescription;
- (long long)item;
- (long long)row;
- (long long)section;
- (void)ui_getSectionIndex:(out long long*)arg1 itemIndex:(out long long*)arg2;

@end
