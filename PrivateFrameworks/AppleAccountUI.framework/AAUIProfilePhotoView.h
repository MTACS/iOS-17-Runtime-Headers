
@interface AAUIProfilePhotoView : UIView {
    UIButton * _editButton;
    bool  _isEditing;
    UIImageView * _photoView;
}

@property (setter=setEditing:, nonatomic) bool isEditing;
@property (nonatomic, retain) UIImage *photo;

- (void).cxx_destruct;
- (double)desiredHeightForWidth:(double)arg1;
- (id)initWithPhoto:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (bool)isEditing;
- (void)layoutSubviews;
- (id)photo;
- (void)setEditing:(bool)arg1;
- (void)setPhoto:(id)arg1;

@end
