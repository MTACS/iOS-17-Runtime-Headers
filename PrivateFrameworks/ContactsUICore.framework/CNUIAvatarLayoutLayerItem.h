
@interface CNUIAvatarLayoutLayerItem : NSObject {
    <CNCancelable> * _avatarImageRendererToken;
    CALayer * _layer;
}

@property (nonatomic, retain) <CNCancelable> *avatarImageRendererToken;
@property (nonatomic, retain) CALayer *layer;

- (void).cxx_destruct;
- (id)avatarImageRendererToken;
- (id)initWithLayer:(id)arg1;
- (id)layer;
- (void)resetToken;
- (void)setAvatarImageRendererToken:(id)arg1;
- (void)setLayer:(id)arg1;

@end
