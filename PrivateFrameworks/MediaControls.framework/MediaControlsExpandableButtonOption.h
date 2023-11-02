
@interface MediaControlsExpandableButtonOption : NSObject {
    MRUAsset * _asset;
    bool  _enabled;
    id  _identifier;
    long long  _selectedBackground;
    UIColor * _selectedBackgroundColor;
    NSString * _selectedState;
    NSString * _title;
}

@property (nonatomic, retain) MRUAsset *asset;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic, retain) id identifier;
@property (nonatomic) long long selectedBackground;
@property (nonatomic, retain) UIColor *selectedBackgroundColor;
@property (nonatomic, retain) NSString *selectedState;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)asset;
- (id)description;
- (id)identifier;
- (id)init;
- (bool)isEnabled;
- (long long)selectedBackground;
- (id)selectedBackgroundColor;
- (id)selectedState;
- (void)setAsset:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSelectedBackground:(long long)arg1;
- (void)setSelectedBackgroundColor:(id)arg1;
- (void)setSelectedState:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
