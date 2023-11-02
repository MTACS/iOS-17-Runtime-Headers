
@interface CNVisualIdentityAvatarLayoutManager : NSObject {
    NSArray * _avatarLayerItems;
    NSArray * _avatarViewAdHocLayoutConfiguration;
    NSArray * _avatarViewLayoutConfiguration;
    long long  _maxAvatarCount;
    CNAvatarAccessoryView * _mediaContextBadge;
}

@property (nonatomic, retain) NSArray *avatarLayerItems;
@property (nonatomic, retain) NSArray *avatarViewAdHocLayoutConfiguration;
@property (nonatomic, retain) NSArray *avatarViewLayoutConfiguration;
@property (nonatomic, readonly) long long maxAvatarCount;
@property (nonatomic, retain) CNAvatarAccessoryView *mediaContextBadge;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adHocAvatarFrameInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forItemCount:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })adHocAvatarFrameInView:(id)arg1 forItemCount:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avatarFrameForFocusedAvatarInView:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avatarFrameInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forItemCount:(long long)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })avatarFrameInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forItemCount:(long long)arg2 withConfiguration:(id)arg3;
- (id)avatarLayerItems;
- (id)avatarViewAdHocLayoutConfiguration;
- (id)avatarViewLayoutConfiguration;
- (bool)hasMediaContextBadge;
- (id)init;
- (id)initWithLayoutType:(unsigned long long)arg1;
- (id)layoutConfigurationForIndex:(long long)arg1 inItemCount:(long long)arg2 withLayoutType:(unsigned long long)arg3;
- (long long)maxAvatarCount;
- (id)mediaContextBadge;
- (void)setAvatarLayerItems:(id)arg1;
- (void)setAvatarViewAdHocLayoutConfiguration:(id)arg1;
- (void)setAvatarViewLayoutConfiguration:(id)arg1;
- (void)setMediaContextBadge:(id)arg1;
- (void)updateAvatarLayersForItemCount:(long long)arg1 inView:(id)arg2;
- (void)updateAvatarLayersForItemCount:(long long)arg1 inView:(id)arg2 withLayoutType:(unsigned long long)arg3;
- (void)updateAvatarLayersWithPrimaryAvatarForItemCount:(long long)arg1 inView:(id)arg2;
- (void)updateLayer:(id)arg1 forItemCount:(long long)arg2 atIndex:(long long)arg3 inView:(id)arg4 withLayoutType:(unsigned long long)arg5;

@end
