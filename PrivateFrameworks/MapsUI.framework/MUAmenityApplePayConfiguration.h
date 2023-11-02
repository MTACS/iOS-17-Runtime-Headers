
@interface MUAmenityApplePayConfiguration : NSObject {
    <MUAmenityItemViewModel> * _applePayRowAmenity;
    bool  _showApplePayIcons;
}

@property (nonatomic, retain) <MUAmenityItemViewModel> *applePayRowAmenity;
@property (nonatomic) bool showApplePayIcons;

+ (id)configurationFromAmenityItem:(id)arg1;

- (void).cxx_destruct;
- (id)applePayRowAmenity;
- (void)setApplePayRowAmenity:(id)arg1;
- (void)setShowApplePayIcons:(bool)arg1;
- (bool)showApplePayIcons;

@end
