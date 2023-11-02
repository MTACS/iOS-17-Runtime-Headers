
@interface SiriUISashItem : SiriSharedUISashItem {
    bool  _canPunchout;
    bool  _isDefault;
}

@property (setter=_setDefault:, nonatomic) bool isDefault;

+ (id)_languageCode;
+ (void)_setLanguageCode:(id)arg1;
+ (id)defaultSashItem;

- (void)_setDefault:(bool)arg1;
- (bool)canPunchout;
- (id)initWithExtension:(id)arg1;
- (bool)isDefault;
- (void)setImage:(id)arg1;
- (void)setTitle:(id)arg1;

@end
