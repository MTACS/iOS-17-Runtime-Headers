
@interface AVTCoreModelColorsPicker : NSObject <AVTCoreModelPicker> {
    bool  _alwaysShowExtended;
    long long  _colorCategory;
    long long  _destination;
    NSArray * _extendedColors;
    NSString * _identifier;
    AVTCoreModelPickerOptions * _options;
    AVTCoreModelPairing * _pairing;
    NSArray * _primaryColors;
    NSString * _title;
}

@property (nonatomic, readonly) bool alwaysShowExtended;
@property (nonatomic, readonly) long long colorCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long destination;
@property (nonatomic, readonly) NSArray *extendedColors;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) AVTCoreModelPickerOptions *options;
@property (nonatomic, readonly, copy) AVTCoreModelPairing *pairing;
@property (nonatomic, readonly) NSArray *primaryColors;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (bool)alwaysShowExtended;
- (long long)colorCategory;
- (id)description;
- (long long)destination;
- (id)extendedColors;
- (id)identifier;
- (id)initWithTitle:(id)arg1 primaryColors:(id)arg2 extendedColors:(id)arg3 alwaysShowExtended:(bool)arg4 colorCategory:(long long)arg5 destination:(long long)arg6 pairing:(id)arg7 options:(id)arg8;
- (id)initWithTitle:(id)arg1 primaryColors:(id)arg2 extendedColors:(id)arg3 identifier:(id)arg4 alwaysShowExtended:(bool)arg5 colorCategory:(long long)arg6 destination:(long long)arg7 pairing:(id)arg8 options:(id)arg9;
- (bool)isEmpty;
- (id)options;
- (id)pairing;
- (id)primaryColors;
- (id)title;

@end
