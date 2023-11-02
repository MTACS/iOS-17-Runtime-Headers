
@interface TVRUIDeviceInfo : NSObject {
    double  _volumeButtonHeight;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _volumeButtonsRect;
}

@property (getter=hasHomeButton, nonatomic, readonly) bool homeButton;
@property (getter=isPad, nonatomic, readonly) bool pad;
@property (nonatomic) double volumeButtonHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } volumeButtonsRect;

+ (id)currentDeviceInfo;

- (void)_readPlistForParametersIfNeeded;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_userIntentButtonRect;
- (id)_volumeButtonsDictionaryForSpecificHardware;
- (double)_volumeButtonsX;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_volumeDownButtonRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_volumeUpButtonRect;
- (id)description;
- (id)hardwareInfoForOrientation:(long long)arg1;
- (bool)hasHomeButton;
- (id)init;
- (bool)isPad;
- (void)setVolumeButtonHeight:(double)arg1;
- (void)setVolumeButtonsRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)volumeButtonHeight;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })volumeButtonsRect;

@end
