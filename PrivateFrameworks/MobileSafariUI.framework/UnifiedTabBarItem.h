
@interface UnifiedTabBarItem : SFUnifiedTabBarItem <TabCollectionItem> {
    long long  _dragState;
    UnifiedTabBarItem * _secondaryItem;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long dragState;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isPlaceholder;
@property (nonatomic, readonly) unsigned long long mediaStateIcon;
@property (getter=isPinned, nonatomic, readonly) bool pinned;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (void)_updateHidden;
- (long long)dragState;
- (bool)isDragging;
- (bool)isDropping;
- (id)secondaryItem;
- (void)setDragState:(long long)arg1;
- (void)setIcon:(id)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setMediaStateIcon:(unsigned long long)arg1;
- (void)setPinned:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUUID:(id)arg1;

@end
