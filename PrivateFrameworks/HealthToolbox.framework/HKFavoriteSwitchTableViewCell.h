
@interface HKFavoriteSwitchTableViewCell : HKSwitchTableViewCell <HKSwitchTableViewCellDelegate, WDFavoriteDisplayTypesControllerObserver> {
    HKDisplayType * _displayType;
    WDFavoriteDisplayTypesController * _favoriteDisplayTypesController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HKDisplayType *displayType;
@property (nonatomic, retain) WDFavoriteDisplayTypesController *favoriteDisplayTypesController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)defaultReuseIdentifier;

- (void).cxx_destruct;
- (void)dealloc;
- (id)displayType;
- (id)favoriteDisplayTypesController;
- (void)favoriteDisplayTypesControllerDidUpdate:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setDisplayType:(id)arg1;
- (void)setFavoriteDisplayTypesController:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(bool)arg2;
- (void)updateSwitchValue;

@end
