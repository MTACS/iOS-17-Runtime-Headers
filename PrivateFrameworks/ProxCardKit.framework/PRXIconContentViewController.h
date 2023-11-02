
@interface PRXIconContentViewController : PRXCardContentViewController {
    NSString * _bodyText;
    long long  _imageStyle;
    NSArray * _images;
}

@property (nonatomic, copy) NSString *bodyText;
@property (nonatomic, readonly) PRXIconContentView *contentView;
@property (nonatomic) long long imageStyle;
@property (nonatomic, copy) NSArray *images;

+ (Class)contentViewClass;

- (void).cxx_destruct;
- (void)_updateBodyLabel;
- (void)_updateImageViews;
- (id)bodyText;
- (long long)imageStyle;
- (id)images;
- (id)initWithContentView:(id)arg1;
- (void)setBodyText:(id)arg1;
- (void)setImageStyle:(long long)arg1;
- (void)setImages:(id)arg1;
- (void)viewDidLoad;

@end
