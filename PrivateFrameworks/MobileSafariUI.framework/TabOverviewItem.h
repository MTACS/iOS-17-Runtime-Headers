
@interface TabOverviewItem : NSObject <TabCollectionItem> {
    NSUUID * _UUID;
    bool  _closing;
    long long  _dragState;
    TabOverviewItemLayoutInfo * _dropPreviewLayoutInfo;
    UIImage * _icon;
    bool  _incoming;
    bool  _isAlternateItem;
    bool  _isPlaceholder;
    TabOverviewItemLayoutInfo * _layoutInfo;
    unsigned long long  _mediaStateIcon;
    bool  _pinned;
    NSArray * _shareParticipants;
    TabOverview * _tabOverview;
    long long  _tintStyle;
    NSString * _title;
    bool  _unread;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long dragState;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *icon;
@property (nonatomic) bool isPlaceholder;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (getter=isPinned, nonatomic) bool pinned;
@property (getter=isRecording, nonatomic, readonly) bool recording;
@property (nonatomic, copy) NSArray *shareParticipants;
@property (readonly) Class superclass;
@property (nonatomic) long long tintStyle;
@property (nonatomic, copy) NSString *title;
@property (getter=isUnread, nonatomic) bool unread;

- (void).cxx_destruct;
- (id)UUID;
- (long long)dragState;
- (id)icon;
- (id)init;
- (bool)isPinned;
- (bool)isPlaceholder;
- (bool)isRecording;
- (bool)isUnread;
- (unsigned long long)mediaStateIcon;
- (void)setDragState:(long long)arg1;
- (void)setIcon:(id)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setMediaStateIcon:(unsigned long long)arg1;
- (void)setPinned:(bool)arg1;
- (void)setShareParticipants:(id)arg1;
- (void)setTintStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (void)setUUID:(id)arg1;
- (void)setUnread:(bool)arg1;
- (id)shareParticipants;
- (long long)tintStyle;
- (id)title;

@end
