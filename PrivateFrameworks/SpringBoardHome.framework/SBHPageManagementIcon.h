
@interface SBHPageManagementIcon : SBLeafIcon {
    SBIconListModel * _listModel;
}

@property (nonatomic, readonly) SBIconListModel *listModel;

- (void).cxx_destruct;
- (bool)canBeAddedToMultiItemDrag;
- (bool)canBeAddedToSubfolder;
- (bool)canBeReceivedByIcon;
- (bool)canReceiveGrabbedIcon;
- (id)initWithListModel:(id)arg1;
- (id)listModel;

@end
