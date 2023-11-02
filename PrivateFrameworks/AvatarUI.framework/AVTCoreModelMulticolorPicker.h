
@interface AVTCoreModelMulticolorPicker : NSObject <AVTCoreModelPicker> {
    bool  _allowsRemoval;
    AVTCoreModelMulticolorAuxiliaryPicker * _auxiliaryPicker;
    NSString * _identifier;
    long long  _initialState;
    NSDictionary * _nestedPresetPickers;
    AVTCoreModelPickerOptions * _options;
    AVTCoreModelPairing * _pairing;
    NSArray * _subpickers;
    NSArray * _subtitles;
    NSString * _title;
}

@property (nonatomic, readonly) bool allowsRemoval;
@property (nonatomic, readonly) AVTCoreModelMulticolorAuxiliaryPicker *auxiliaryPicker;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long initialState;
@property (nonatomic, readonly) NSDictionary *nestedPresetPickers;
@property (nonatomic, readonly) AVTCoreModelPickerOptions *options;
@property (nonatomic, readonly, copy) AVTCoreModelPairing *pairing;
@property (nonatomic, readonly) NSArray *subpickers;
@property (nonatomic, readonly) NSArray *subtitles;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (bool)allowsRemoval;
- (id)auxiliaryPicker;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2 subpickers:(id)arg3 subtitles:(id)arg4 nestedPresetPickers:(id)arg5 auxiliaryPicker:(id)arg6 initialState:(long long)arg7 allowsRemoval:(bool)arg8 options:(id)arg9;
- (id)initWithTitle:(id)arg1 subpickers:(id)arg2 subtitles:(id)arg3 nestedPresetPickers:(id)arg4 auxiliaryPicker:(id)arg5 initialState:(long long)arg6 allowsRemoval:(bool)arg7 options:(id)arg8;
- (long long)initialState;
- (id)nestedPresetPickers;
- (id)options;
- (id)pairing;
- (id)subpickers;
- (id)subtitles;
- (id)title;

@end
