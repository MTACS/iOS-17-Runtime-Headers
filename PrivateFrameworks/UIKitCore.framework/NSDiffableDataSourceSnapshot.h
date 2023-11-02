
@interface NSDiffableDataSourceSnapshot : NSObject <NSCopying> {
    __UIDiffableDataSourceSnapshot * _impl;
}

@property (nonatomic, readonly) __UIDiffableDataSourceSnapshot *impl;
@property (nonatomic, readonly) NSArray *itemIdentifiers;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly) long long numberOfSections;
@property (nonatomic, readonly) NSArray *reconfiguredItemIdentifiers;
@property (nonatomic, readonly) NSArray *reloadedItemIdentifiers;
@property (nonatomic, readonly) NSArray *reloadedSectionIdentifiers;
@property (nonatomic, readonly) NSArray *sectionIdentifiers;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id)_identifierAfterIdentifier:(id)arg1;
- (id)_identifierBeforeIdentifier:(id)arg1;
- (id)_initWithImpl:(id)arg1;
- (void)appendItemsWithIdentifiers:(id)arg1;
- (void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2;
- (void)appendSectionsWithIdentifiers:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)deleteAllItems;
- (void)deleteItemsWithIdentifiers:(id)arg1;
- (void)deleteSectionsWithIdentifiers:(id)arg1;
- (id)description;
- (id)identifierForIndexPath:(id)arg1;
- (id)impl;
- (long long)indexOfItemIdentifier:(id)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (id)indexPathForIdentifier:(id)arg1;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (id)initWithState:(id)arg1;
- (void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)itemIdentifiers;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2;
- (void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2;
- (void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2;
- (void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2;
- (long long)numberOfItems;
- (long long)numberOfItemsInSection:(id)arg1;
- (long long)numberOfSections;
- (void)reconfigureItemsWithIdentifiers:(id)arg1;
- (id)reconfiguredItemIdentifiers;
- (void)reloadItemsWithIdentifiers:(id)arg1;
- (void)reloadSectionsWithIdentifiers:(id)arg1;
- (id)reloadedItemIdentifiers;
- (id)reloadedSectionIdentifiers;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sectionGlobalItemRangeForSection:(long long)arg1;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;
- (id)sectionIdentifiers;
- (id)state;
- (void)validateIdentifiers;

// Image: /System/Library/PrivateFrameworks/MailUI.framework/MailUI

+ (id)log;

- (id)mui_validItemIDFromExistingItemID:(id)arg1 updateReason:(id)arg2;
- (id)mui_validItemIDsFromExistingItemIDs:(id)arg1 section:(id)arg2 updateReason:(id)arg3;
- (id)mui_validItemIDsFromExistingItemIDs:(id)arg1 updateReason:(id)arg2;
- (id)mui_validItemIDsFromIndexPaths:(id)arg1;
- (id)mui_validSectionIdentifiers;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

- (void)ic_updateWithSectionIdentifiers:(id)arg1;

@end
