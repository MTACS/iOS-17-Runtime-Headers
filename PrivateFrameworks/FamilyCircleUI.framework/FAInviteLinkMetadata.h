
@interface FAInviteLinkMetadata : NSObject {
    FAInviteContext * _context;
    LPImage * _icon;
    LPImage * _image;
}

@property (nonatomic, readonly) LPLinkMetadata *bubbleMetadata;
@property (nonatomic, retain) FAInviteContext *context;
@property (nonatomic, retain) LPImage *icon;
@property (nonatomic, retain) LPImage *image;
@property (nonatomic, readonly) LPLinkMetadata *mailMetadata;

- (void).cxx_destruct;
- (id)bubbleMetadata;
- (id)context;
- (id)icon;
- (id)image;
- (id)mailMetadata;
- (void)setContext:(id)arg1;
- (void)setIcon:(id)arg1;
- (void)setImage:(id)arg1;

@end
