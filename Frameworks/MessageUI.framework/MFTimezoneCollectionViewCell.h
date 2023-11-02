
@interface MFTimezoneCollectionViewCell : UICollectionViewListCell {
    NSString * _currentCityName;
    UICellAccessoryLabel * _timeZoneLabel;
}

@property (nonatomic, retain) NSString *currentCityName;
@property (nonatomic, retain) UICellAccessoryLabel *timeZoneLabel;

+ (id)reusableIdentifier;

- (void).cxx_destruct;
- (void)_configureWithCityName:(id)arg1;
- (id)currentCityName;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setCurrentCityName:(id)arg1;
- (void)setTimeZoneLabel:(id)arg1;
- (id)timeZoneLabel;

@end
