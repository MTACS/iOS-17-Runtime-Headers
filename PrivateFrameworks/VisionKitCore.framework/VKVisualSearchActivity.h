
@interface VKVisualSearchActivity : UIActivity {
    UIImage * _image;
    struct CGImage { } * _imageToProcess;
    UIViewController * _presentingViewController;
    NSString * _title;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) struct CGImage { }*imageToProcess;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)image;
- (struct CGImage { }*)imageToProcess;
- (id)initWithImage:(struct CGImage { }*)arg1 presentingViewController:(id)arg2;
- (void)performActivity;
- (id)presentingViewController;
- (void)setImage:(id)arg1;
- (void)setImageToProcess:(struct CGImage { }*)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
