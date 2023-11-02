
@interface _DDUIMonogramView : UIView {
    UIImage * _deviceImage;
    UIImage * _monogramImage;
    NSPersonNameComponents * _nameComponents;
    bool  _useFocusedAppearance;
}

@property (nonatomic, retain) UIImage *deviceImage;
@property (nonatomic, retain) UIImage *monogramImage;
@property (nonatomic, retain) NSPersonNameComponents *nameComponents;
@property (nonatomic) bool useFocusedAppearance;

- (void).cxx_destruct;
- (id)deviceImage;
- (id)monogramImage;
- (id)nameComponents;
- (void)setDeviceImage:(id)arg1;
- (void)setMonogramImage:(id)arg1;
- (void)setNameComponents:(id)arg1;
- (void)setUseFocusedAppearance:(bool)arg1;
- (bool)useFocusedAppearance;

@end
