
@interface ContactsUI.CNPosterSetupAvatarPreviewViewWrapper : NSObject {
    void avatarPreviewView;
    void configuration;
    void hostingController;
}

@property (nonatomic, retain) UIViewController *hostingController;

- (void).cxx_destruct;
- (id)hostingController;
- (id)init;
- (id)initWithImageData:(id)arg1 cropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 imageType:(unsigned long long)arg3 delegate:(id)arg4;
- (void)setCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setHostingController:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setImageType:(unsigned long long)arg1;

@end
