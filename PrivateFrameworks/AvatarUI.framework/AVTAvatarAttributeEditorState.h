
@interface AVTAvatarAttributeEditorState : NSObject {
    NSMutableDictionary * _multicolorEnabledStates;
    NSMutableDictionary * _multicolorSelectedStates;
    NSMutableDictionary * _pairedStates;
}

@property (nonatomic, retain) NSMutableDictionary *multicolorEnabledStates;
@property (nonatomic, retain) NSMutableDictionary *multicolorSelectedStates;
@property (nonatomic, retain) NSMutableDictionary *pairedStates;

+ (id)buildStateFromCoreModel:(id)arg1 avatarConfiguration:(id)arg2;

- (void).cxx_destruct;
- (long long)enabledMulticolorSubpickersIndexForMulticolorPickerIdentifier:(id)arg1;
- (id)init;
- (id)initWithPairedStates:(id)arg1 multicolorEnabledStates:(id)arg2 multicolorSelectedStates:(id)arg3;
- (bool)isCategoryPaired:(long long)arg1;
- (id)multicolorEnabledStates;
- (id)multicolorSelectedStates;
- (id)pairedStates;
- (long long)selectedMulticolorSubpickersIndexForMulticolorPickerIdentifier:(id)arg1;
- (void)setCategory:(long long)arg1 inPairedState:(bool)arg2;
- (void)setEnabledMulticolorSubpickersIndex:(long long)arg1 forMulticolorPickerIdentifier:(id)arg2;
- (void)setMulticolorEnabledStates:(id)arg1;
- (void)setMulticolorSelectedStates:(id)arg1;
- (void)setPairedStates:(id)arg1;
- (void)setSelectedMulticolorSubpickersIndex:(long long)arg1 forMulticolorPickerIdentifier:(id)arg2;

@end
