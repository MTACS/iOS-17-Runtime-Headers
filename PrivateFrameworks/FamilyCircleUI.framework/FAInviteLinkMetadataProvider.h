
@interface FAInviteLinkMetadataProvider : NSObject {
    FAInviteContext * _context;
}

- (void).cxx_destruct;
- (id)_colorForString:(id)arg1;
- (id)_defaultIcon;
- (id)_defaultImage;
- (id)_imageNamed:(id)arg1;
- (void)fetchImageFromURL:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithContext:(id)arg1;
- (id)linkMetadataWithImage:(id)arg1 icon:(id)arg2;
- (void)loadImageWithURL:(id)arg1 enableTextOverlay:(bool)arg2 completion:(id /* block */)arg3;
- (void)loadMetatadataWithCompletion:(id /* block */)arg1;

@end
