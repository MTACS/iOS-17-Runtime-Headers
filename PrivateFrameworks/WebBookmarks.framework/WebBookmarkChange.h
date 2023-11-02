
@interface WebBookmarkChange : NSObject <WBChange> {
    int  _associatedBookmarkID;
    WebBookmark * _bookmark;
    int  _bookmarkID;
    NSArray * _bookmarks;
    long long  _changeType;
    unsigned long long  _modifiedAttributes;
    int  _parentID;
    int  _specialFolderID;
}

@property (nonatomic) int associatedBookmarkID;
@property (nonatomic, readonly) WebBookmark *bookmark;
@property (nonatomic) int bookmarkID;
@property (nonatomic, copy) NSArray *bookmarks;
@property (nonatomic, readonly) long long changeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long modifiedAttributes;
@property (nonatomic) int parentID;
@property (nonatomic, readonly) bool shouldSync;
@property (nonatomic) int specialFolderID;
@property (readonly) Class superclass;

+ (id)bookmarkAddChangeWithBookmark:(id)arg1;
+ (id)bookmarkModifyChangeWithBookmark:(id)arg1;
+ (id)deleteChangeWithBookmark:(id)arg1;
+ (id)moveChangeWithBookmark:(id)arg1 toFolderWithID:(int)arg2;
+ (id)reorderChangeWithBookmark:(id)arg1 afterBookmark:(id)arg2;
+ (id)replaceChangeWithBookmarks:(id)arg1 inFolderWithID:(int)arg2;
+ (id)replaceChangeWithBookmarks:(id)arg1 inFolderWithSpecialID:(int)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setModifiedAttributesIfSupported;
- (id)_stringForType:(long long)arg1;
- (void)applyModificationsToBookmark:(id)arg1;
- (int)associatedBookmarkID;
- (bool)attributesMarkedAsModify:(unsigned long long)arg1;
- (id)bookmark;
- (int)bookmarkID;
- (id)bookmarks;
- (long long)changeType;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBookmark:(id)arg1 bookmarkID:(int)arg2 parentID:(int)arg3 associatedBookmarkID:(int)arg4 changeType:(long long)arg5;
- (id)initWithBookmark:(id)arg1 bookmarkID:(int)arg2 parentID:(int)arg3 changeType:(long long)arg4;
- (id)initWithBookmarkID:(int)arg1 parentID:(int)arg2 associatedBookmarkID:(int)arg3 changeType:(long long)arg4;
- (id)initWithBookmarkID:(int)arg1 parentID:(int)arg2 changeType:(long long)arg3;
- (id)initWithBookmarks:(id)arg1 parentID:(int)arg2 changeType:(long long)arg3;
- (id)initWithBookmarks:(id)arg1 parentID:(int)arg2 specialFolderID:(int)arg3 changeType:(long long)arg4;
- (id)initWithBookmarks:(id)arg1 specialFolderID:(int)arg2 changeType:(long long)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (unsigned long long)modifiedAttributes;
- (int)parentID;
- (void)setAssociatedBookmarkID:(int)arg1;
- (void)setBookmarkID:(int)arg1;
- (void)setBookmarks:(id)arg1;
- (void)setModifiedAttributes:(unsigned long long)arg1;
- (void)setParentID:(int)arg1;
- (void)setSpecialFolderID:(int)arg1;
- (bool)shouldSync;
- (int)specialFolderID;
- (void)updateChangeAfterUpdatingInMemoryID:(int)arg1 withDatabaseID:(int)arg2;

@end
