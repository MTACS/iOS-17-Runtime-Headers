
@interface TabBarItem : NSObject <SFTabHoverPreviewItem, TabCollectionItem> {
    NSUUID * _UUID;
    bool  _active;
    long long  _dragState;
    UIImage * _icon;
    bool  _isPlaceholder;
    TabBarItemLayoutInfo * _layoutInfo;
    unsigned long long  _mediaStateIcon;
    bool  _pinned;
    NSArray * _shareParticipants;
    TabBar * _tabBar;
    NSString * _title;
    bool  _unread;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long dragState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic) bool isPlaceholder;
@property (nonatomic, retain) TabBarItemLayoutInfo *layoutInfo;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (getter=isPinned, nonatomic) bool pinned;
@property (nonatomic, copy) NSArray *shareParticipants;
@property (readonly) Class superclass;
@property (nonatomic) TabBar *tabBar;
@property (nonatomic, copy) NSString *title;
@property (getter=isUnread, nonatomic) bool unread;

- (void).cxx_destruct;
- (id)UUID;
- (long long)dragState;
- (id)icon;
- (id)init;
- (bool)isActive;
- (bool)isPinned;
- (bool)isPlaceholder;
- (bool)isUnread;
- (id)layoutInfo;
- (unsigned long long)mediaStateIcon;
- (id)menuElementRepresentationWithSelectionHandler:(id /* block */)arg1;
- (void)setActive:(bool)arg1;
- (void)setDragState:(long long)arg1;
- (void)setIcon:(id)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setLayoutInfo:(id)arg1;
- (void)setMediaStateIcon:(unsigned long long)arg1;
- (void)setPinned:(bool)arg1;
- (void)setShareParticipants:(id)arg1;
- (void)setTabBar:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setUnread:(bool)arg1;
- (id)shareParticipants;
- (id)tabBar;
- (id)title;

@end
