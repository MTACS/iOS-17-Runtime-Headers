
@interface PXNavigationListItem : NSObject <PXNavigationListItem> {
    NSString * _accessoryTitle;
    NSString * _badgeString;
    NSString * _identifier;
    long long  _itemCount;
    unsigned long long  _lockState;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *accessoryGlyphImageName;
@property (nonatomic, readonly) NSString *accessoryTitle;
@property (nonatomic, copy) NSString *badgeString;
@property (nonatomic, readonly) PHCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDeletable, nonatomic, readonly) bool deletable;
@property (readonly, copy) NSString *description;
@property (getter=isDraggable, nonatomic, readonly) bool draggable;
@property (getter=isExpandable, nonatomic, readonly) bool expandable;
@property (getter=isExpanded, nonatomic, readonly) bool expanded;
@property (nonatomic, readonly) NSString *glyphImageName;
@property (getter=isGroup, nonatomic, readonly) bool group;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long indentationLevel;
@property (nonatomic, readonly) long long itemCount;
@property (nonatomic) unsigned long long lockState;
@property (getter=isRemovable, nonatomic, readonly) bool removable;
@property (getter=isRenamable, nonatomic, readonly) bool renamable;
@property (getter=isReorderable, nonatomic, readonly) bool reorderable;
@property (nonatomic, readonly) id representedObject;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *visualDescription;

- (void).cxx_destruct;
- (id)accessoryGlyphImageName;
- (id)accessoryTitle;
- (id)badgeString;
- (id)collection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)glyphImageName;
- (unsigned long long)hash;
- (id)identifier;
- (long long)indentationLevel;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 itemCount:(long long)arg3;
- (bool)isDeletable;
- (bool)isDraggable;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNavigationListItem:(id)arg1;
- (bool)isExpandable;
- (bool)isExpanded;
- (bool)isGroup;
- (bool)isRemovable;
- (bool)isRenamable;
- (bool)isReorderable;
- (long long)itemCount;
- (unsigned long long)lockState;
- (id)representedObject;
- (void)setBadgeString:(id)arg1;
- (void)setLockState:(unsigned long long)arg1;
- (long long)style;
- (id)title;
- (id)visualDescription;

@end
