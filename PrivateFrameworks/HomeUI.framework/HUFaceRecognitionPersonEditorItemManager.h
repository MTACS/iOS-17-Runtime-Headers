
@interface HUFaceRecognitionPersonEditorItemManager : HFItemManager {
    HFItem * _addNameItem;
    HFItem * _deleteItem;
    HFItem * _faceCropItem;
    HFStaticItem * _hideNotificationsItem;
    HFItem * _nameItem;
    HMHome * _personHome;
    HFStaticItemProvider * _staticItemProvider;
    HFUserNameFormatter * _userNameFormatter;
}

@property (nonatomic, retain) HFItem *addNameItem;
@property (nonatomic, retain) HFItem *deleteItem;
@property (nonatomic, retain) HFItem *faceCropItem;
@property (nonatomic, retain) HFStaticItem *hideNotificationsItem;
@property (nonatomic, retain) HFItem *nameItem;
@property (nonatomic, retain) HMHome *personHome;
@property (nonatomic, readonly) HFItem<HFPersonLikeItem> *personItem;
@property (nonatomic, retain) HFStaticItemProvider *staticItemProvider;
@property (nonatomic, retain) HFUserNameFormatter *userNameFormatter;

+ (id)dateFormatter;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)_homeFuture;
- (id)addNameItem;
- (id)deleteItem;
- (id)faceCropItem;
- (id)hideNotificationsItem;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (id)nameItem;
- (id)personHome;
- (id)personItem;
- (void)setAddNameItem:(id)arg1;
- (void)setDeleteItem:(id)arg1;
- (void)setFaceCropItem:(id)arg1;
- (void)setHideNotificationsItem:(id)arg1;
- (void)setNameItem:(id)arg1;
- (void)setPersonHome:(id)arg1;
- (void)setStaticItemProvider:(id)arg1;
- (void)setUserNameFormatter:(id)arg1;
- (id)staticItemProvider;
- (id)userNameFormatter;

@end
