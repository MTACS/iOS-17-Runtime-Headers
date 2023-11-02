
@interface HPSBatteryStatusView : UIView {
    UIView * caseEngravingView;
    UIImageView * caseImageView;
    BTSDevice * currentDevice;
    bool  darkMode;
    unsigned char  deviceColor;
    UIImageView * deviceImageView;
    HPSEngravingService * engravingService;
    UIImageView * leftImageView;
    NSString * productIdString;
    UIImageView * rightImageView;
    struct { 
        unsigned char battLevelSingle; 
        unsigned int battIsChargingSingle; 
        unsigned char battLevelRight; 
        unsigned int battIsChargingRight; 
        unsigned char battLevelLeft; 
        unsigned int battIsChargingLeft; 
        unsigned char battLevelCase; 
        unsigned int battIsChargingCase; 
        unsigned char battLevelCombined; 
        unsigned int battIsChargingCombined; 
    }  status;
    bool  untethered;
}

- (void).cxx_destruct;
- (void)applyFilters:(id)arg1 imageView:(id)arg2;
- (void)applyFiltersForMode:(bool)arg1;
- (unsigned char)bestDeviceColor:(unsigned int)arg1 productID:(unsigned int)arg2;
- (unsigned int)defaultFiltersID;
- (id)getAssetsDictionary:(unsigned int)arg1;
- (void)getBatteryStatus;
- (id)getDeviceCaseIcon:(unsigned int)arg1;
- (id)getProductIDString;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 device:(id)arg2 darkMode:(bool)arg3;
- (bool)isProductOfDifferentColors;
- (void)setupViews;

@end
