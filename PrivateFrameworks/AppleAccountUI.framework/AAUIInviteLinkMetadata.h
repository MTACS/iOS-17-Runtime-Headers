
@interface AAUIInviteLinkMetadata : NSObject {
    AAMessagesInviteContext * _context;
    LPImage * _icon;
    LPImage * _image;
}

@property (nonatomic, readonly) LPLinkMetadata *bubbleMetadata;
@property (nonatomic, readonly) AAMessagesInviteContext *context;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic, retain) LPImage *image;

- (void).cxx_destruct;
- (id)bubbleMetadata;
- (id)context;
- (id)icon;
- (id)image;
- (id)initWithContext:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setImage:(id)arg1;

@end
