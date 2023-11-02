
@interface CKBrowserPluginCell : CKBrowserCell {
    UIImageView * _browserImage;
    IMBalloonPlugin * _plugin;
    UIImageView * _selectionOutline;
}

@property (nonatomic, retain) UIImageView *browserImage;
@property (nonatomic, retain) IMBalloonPlugin *plugin;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_setImageForPlugin:(id)arg1;
- (void)_updateShinyStatus;
- (id)browserImage;
- (id)iconView;
- (void)layoutSubviews;
- (id)plugin;
- (void)setBrowserImage:(id)arg1;
- (void)setPlugin:(id)arg1;
- (void)setPlugin:(id)arg1 hideShinyStatus:(bool)arg2;
- (void)setSelected:(bool)arg1;

@end
