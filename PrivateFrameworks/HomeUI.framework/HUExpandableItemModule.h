
@interface HUExpandableItemModule : HFItemModule {
    bool  _showOptions;
}

@property (nonatomic) bool showOptions;
@property (nonatomic, readonly) HFItem *showOptionsItem;

- (void)setShowOptions:(bool)arg1;
- (bool)showOptions;
- (id)showOptionsItem;

@end
