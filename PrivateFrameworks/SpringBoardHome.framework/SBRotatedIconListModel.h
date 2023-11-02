
@interface SBRotatedIconListModel : SBIconListModel {
    SBIconListModel * _unrotatedIconListModel;
}

@property (nonatomic) SBIconListModel *unrotatedIconListModel;

+ (bool)supportsRotatedLayout;

- (void).cxx_destruct;
- (void)_notifyListObserversDidAddIcons:(id)arg1 didRemoveIcons:(id)arg2 movedIcons:(id)arg3 didReplaceIcon:(id)arg4 withIcon:(id)arg5;
- (void)clearParentNodeForIconIfNecessary:(id)arg1;
- (void)setUnrotatedIconListModel:(id)arg1;
- (id)unrotatedIconListModel;
- (void)updateParentNodeForIconIfNecessary:(id)arg1;

@end
