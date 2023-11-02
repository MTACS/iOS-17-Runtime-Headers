
@interface CNUINavigationListItem : NSObject <CNUINavigationListItemContent> {
    <CNUINavigationListItemContent> * _content;
    CNUINavigationListItem * _defaultItem;
    NSString * _identifier;
    UIImage * _image;
    NSArray * _items;
    CNUINavigationListItem * _parent;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, retain) <CNUINavigationListItemContent> *content;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CNUINavigationListItem *defaultItem;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic) CNUINavigationListItem *parent;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)faceTimeNavigationListItemsForUserActionListModel:(id)arg1;
+ (id)favoritesNavigationListItemsForUserActionListModel:(id)arg1;
+ (id)itemForActionItem:(id)arg1 isGrouped:(bool)arg2;
+ (id)localizedLabelForActionItem:(id)arg1 usingPropertyLabel:(bool)arg2;
+ (id)navigationListItemForContactProperty:(id)arg1;
+ (id)navigationListItemsForUserActionListModel:(id)arg1;

- (void).cxx_destruct;
- (id)content;
- (id)defaultItem;
- (id)identifier;
- (id)image;
- (id)init;
- (id)initWithTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2;
- (id)items;
- (id)parent;
- (void)setContent:(id)arg1;
- (void)setDefaultItem:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
