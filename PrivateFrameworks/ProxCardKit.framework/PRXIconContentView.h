
@interface PRXIconContentView : PRXCardContentView {
    PRXLabel * _bodyLabel;
    NSArray * _bodyLabelConstraints;
    NSArray * _imageViews;
    NSArray * _imageViewsConstraints;
    UILayoutGuide * _imageViewsGuide;
}

@property (nonatomic, retain) PRXLabel *bodyLabel;
@property (nonatomic, copy) NSArray *imageViews;

- (void).cxx_destruct;
- (id)bodyLabel;
- (id)imageViews;
- (id)initWithCardStyle:(long long)arg1;
- (void)setBodyLabel:(id)arg1;
- (void)setImageViews:(id)arg1;
- (void)updateConstraints;

@end
