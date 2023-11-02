
@interface MUPlaceCoverPhotoOptions : NSObject {
    bool  _insetsCoverPhoto;
    bool  _showShareButton;
}

@property (nonatomic) bool insetsCoverPhoto;
@property (nonatomic) bool showShareButton;

- (bool)insetsCoverPhoto;
- (void)setInsetsCoverPhoto:(bool)arg1;
- (void)setShowShareButton:(bool)arg1;
- (bool)showShareButton;

@end
