
@interface NUPageStyle : NSObject {
    bool  _hideToolbar;
    NSString * _nextButtonTitle;
    NSString * _title;
    UIImage * _titleImage;
}

@property (nonatomic) bool hideToolbar;
@property (nonatomic, copy) NSString *nextButtonTitle;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) UIImage *titleImage;

- (void).cxx_destruct;
- (bool)hideToolbar;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)nextButtonTitle;
- (void)setHideToolbar:(bool)arg1;
- (void)setNextButtonTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitleImage:(id)arg1;
- (id)title;
- (id)titleImage;

@end
