
@protocol TabCollectionItem <NSObject>

@required

- (NSUUID *)UUID;
- (long long)dragState;
- (bool)isPinned;
- (bool)isPlaceholder;
- (unsigned long long)mediaStateIcon;
- (void)setDragState:(long long)arg1;
- (NSString *)title;

@end
