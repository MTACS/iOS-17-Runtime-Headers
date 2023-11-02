
@interface AVTAvatarAttributeEditorSectionSupplementalPicker : NSObject <AVTAvatarAttributeEditorSectionSupplementalPicker> {
    NSArray * _choices;
    NSString * _localizedTitle;
}

@property (nonatomic, readonly, copy) NSArray *choices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedTitle;
@property (readonly) Class superclass;

+ (id)pickerForMulticolorPicker:(id)arg1 isMultipleSelected:(bool)arg2 switchToSingleColorAvatarUpdater:(id /* block */)arg3 switchToMultipleColorAvatarUpdater:(id /* block */)arg4;
+ (id)pickerForPairableModelCategory:(id)arg1 isPaired:(bool)arg2 avatarUpdaterOnPair:(id /* block */)arg3;
+ (id)pickerFromEditorSection:(id)arg1;

- (void).cxx_destruct;
- (id)choices;
- (id)copyWithLocalizedTitle:(id)arg1;
- (id)initWithLocalizedTitle:(id)arg1 choices:(id)arg2;
- (id)localizedTitle;

@end
