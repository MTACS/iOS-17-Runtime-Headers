
@interface MailUI.MUIMessageListPrototypeCollectionViewCell : UICollectionViewCell <MessageListSectionCellCapable> {
    void $__lazy_storage_$_cellHelper;
    void backgroundViewConfigurationGrouping;
    void disclosureDelegate;
    void itemID;
    void messageListItemFetchTimeoutCancelable;
    void messageListItemFuture;
    void needsFlushSeparator;
}

@property (nonatomic) long long backgroundViewConfigurationGrouping;
@property (nonatomic, retain) MessageListCellHelper *cellHelper;
@property (nonatomic) <MessageListCellDisclosureDelegate> *disclosureDelegate;
@property (nonatomic, retain) <EMCollectionItemID> *itemID;
@property (nonatomic, readonly) <EMMessageListItem> *messageListItem;
@property (nonatomic, retain) <EFCancelable> *messageListItemFetchTimeoutCancelable;
@property (nonatomic, retain) id messageListItemFuture;
@property (nonatomic) bool needsFlushSeparator;

+ (id)reusableIdentifier;
+ (void)setReusableIdentifier:(id)arg1;

- (void).cxx_destruct;
- (long long)backgroundViewConfigurationGrouping;
- (id)cellHelper;
- (id)disclosureDelegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)itemID;
- (id)messageListItem;
- (id)messageListItemFetchTimeoutCancelable;
- (id)messageListItemFuture;
- (bool)needsFlushSeparator;
- (void)setBackgroundViewConfigurationGrouping:(long long)arg1;
- (void)setCellHelper:(id)arg1;
- (void)setDisclosureDelegate:(id)arg1;
- (void)setDisclosureEnabled:(bool)arg1 animated:(bool)arg2;
- (void)setEditing:(bool)arg1 animated:(bool)arg2;
- (void)setItemID:(id)arg1;
- (void)setMessageListItemFetchTimeoutCancelable:(id)arg1;
- (void)setMessageListItemFuture:(id)arg1;
- (void)setNeedsFlushSeparator:(bool)arg1;

@end
