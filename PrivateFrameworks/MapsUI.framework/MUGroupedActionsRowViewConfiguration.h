
@interface MUGroupedActionsRowViewConfiguration : NSObject {
    UIColor * _itemBackgroundColor;
    UIColor * _itemHighlightColor;
    long long  _style;
    UIColor * _tintColor;
    bool  _useVibrancy;
}

@property (nonatomic, retain) UIColor *itemBackgroundColor;
@property (nonatomic, retain) UIColor *itemHighlightColor;
@property (nonatomic) long long style;
@property (nonatomic, retain) UIColor *tintColor;
@property (nonatomic) bool useVibrancy;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 useVibrancy:(bool)arg2;
- (id)itemBackgroundColor;
- (id)itemHighlightColor;
- (void)setItemBackgroundColor:(id)arg1;
- (void)setItemHighlightColor:(id)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTintColor:(id)arg1;
- (void)setUseVibrancy:(bool)arg1;
- (long long)style;
- (id)tintColor;
- (bool)useVibrancy;

@end
