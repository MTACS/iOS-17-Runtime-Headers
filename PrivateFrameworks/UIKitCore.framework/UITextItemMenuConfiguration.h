
@interface UITextItemMenuConfiguration : NSObject {
    UIMenu * _menu;
    UITextItemMenuPreview * _preview;
}

@property (nonatomic, readonly) UIMenu *menu;
@property (nonatomic, readonly) UITextItemMenuPreview *preview;

+ (id)configurationWithMenu:(id)arg1;
+ (id)configurationWithPreview:(id)arg1 menu:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithPreview:(id)arg1 menu:(id)arg2;
- (id)menu;
- (id)preview;

@end
