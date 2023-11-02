
@interface PREditingFontPickerItem : NSObject {
    PRTimeFontConfiguration * _fontConfiguration;
    bool  _systemItem;
}

@property (nonatomic, retain) PRTimeFontConfiguration *fontConfiguration;
@property (getter=isSystemItem, nonatomic) bool systemItem;

- (void).cxx_destruct;
- (id)fontConfiguration;
- (id)initWithFontConfiguration:(id)arg1 systemItem:(bool)arg2;
- (bool)isSystemItem;
- (void)setFontConfiguration:(id)arg1;
- (void)setSystemItem:(bool)arg1;

@end
