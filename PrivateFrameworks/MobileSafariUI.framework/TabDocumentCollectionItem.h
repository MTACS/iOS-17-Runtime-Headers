
@interface TabDocumentCollectionItem : NSObject <NSCopying, TabCollectionItem> {
    NSUUID * _UUID;
    long long  _dragState;
    bool  _isPlaceholder;
    unsigned long long  _mediaStateIcon;
    bool  _pinned;
    NSString * _title;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long dragState;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPlaceholder;
@property (nonatomic) unsigned long long mediaStateIcon;
@property (getter=isPinned, nonatomic) bool pinned;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)UUID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dragState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isPinned;
- (bool)isPlaceholder;
- (unsigned long long)mediaStateIcon;
- (void)setDragState:(long long)arg1;
- (void)setIsPlaceholder:(bool)arg1;
- (void)setMediaStateIcon:(unsigned long long)arg1;
- (void)setPinned:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setUUID:(id)arg1;
- (id)title;

@end
