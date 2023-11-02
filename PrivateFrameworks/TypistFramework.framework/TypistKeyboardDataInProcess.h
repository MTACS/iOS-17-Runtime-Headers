
@interface TypistKeyboardDataInProcess : NSObject <TypistKeyboardDataProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_activeInputModesContainsInputMode:(id)arg1;
+ (id)_variantsByAppendingDualStringKey:(id)arg1 toVariants:(id)arg2;
+ (id)addKeyboardGestureKeys:(id)arg1 keys:(id)arg2 inPlane:(id)arg3 addTo:(id)arg4;
+ (id)addKeyboardPopupKeys:(id)arg1 keys:(id)arg2 inPlane:(id)arg3 addTo:(id)arg4 keyplaneKeycaps:(id)arg5;
+ (id)addKeyboards:(id)arg1;
+ (id)appendingSecondaryStringToVariantsTop:(id)arg1 secondaryString:(id)arg2 withDirection:(id)arg3;
+ (struct CGPoint { double x1; double x2; })centerOfKey:(struct CGPoint { double x1; double x2; })arg1 withOffset:(struct CGPoint { double x1; double x2; })arg2;
+ (id)cleanUpSwitchTableBasedOnDefaultPlane:(id)arg1 defaultPlaneName:(id)arg2;
+ (id)determineDefaultPlane10Key:(id)arg1 basePlaneName:(id)arg2;
+ (id)determineDefaultPlane:(id)arg1 basePlaneName:(id)arg2;
+ (bool)dismissKeyboard;
+ (id)dismissOneTimeTIActions:(id)arg1;
+ (unsigned long long)downActionFlagsForKey:(id)arg1 plane:(id)arg2 keyplaneKeycaps:(id)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })findKeyBoundsInKeyboard:(id)arg1;
+ (struct CGPoint { double x1; double x2; })floatingKeyboardDraggablePoint;
+ (id)generateKeyplaneSwitchTable:(id)arg1;
+ (id)generateKeyplaneSwitchTableFor10Key:(id)arg1;
+ (bool)generatePopupKeySubtrees:(id)arg1 key:(id)arg2 plane:(id)arg3 layout:(id)arg4 keyplaneKeycaps:(id)arg5;
+ (id)getAllCandidates;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getCandidateBarRect;
+ (struct CGPoint { double x1; double x2; })getCandidateCenter:(id)arg1;
+ (struct CGPoint { double x1; double x2; })getCandidateCenterAtIndex:(long long)arg1;
+ (struct CGPoint { double x1; double x2; })getExtendedCandidateViewToggleButtonCenter;
+ (id)getKeyboardLayout:(id)arg1;
+ (id)getKeyboardPlaneKeys:(id)arg1 keys:(id)arg2 inPlane:(id)arg3;
+ (id)getKeyboardUISettings;
+ (id)getKeyplaneDescription:(id)arg1;
+ (id)getRepresentedStringFromKey:(id)arg1;
+ (id)getSentenceBoundaryStrings;
+ (int)getShuangpinEnumeration:(id)arg1;
+ (id)getTIPreferences;
+ (id)getVisibleCandidateList:(id)arg1;
+ (id)getVisibleKeyplaneName;
+ (int)getWubiEnumeration:(id)arg1;
+ (bool)hasMarkedText;
+ (bool)isCandidateCellVisible:(id)arg1;
+ (bool)isExtendedCandidateViewMode;
+ (bool)keyHasAccentedVariants:(id)arg1 plane:(id)arg2 keyplaneKeycaps:(id)arg3;
+ (id)markedText;
+ (id)removeKeyboards:(id)arg1;
+ (id)setKeyboardUISettings:(id)arg1;
+ (id)setKeyboards:(id)arg1;
+ (id)setOneHandedKeyboardHandBias:(id)arg1;
+ (id)setTIPreferences:(id)arg1;
+ (bool)shouldShowDictationKey;
+ (bool)shouldShowGlobeKey;
+ (void)showCandidateAtIndex:(long long)arg1;
+ (void)showPopupVariantsForKey:(id)arg1 key:(id)arg2 plane:(id)arg3 keyplaneKeycaps:(id)arg4;
+ (bool)switchToKeyboard:(id)arg1;
+ (bool)switchToPlane:(id)arg1;
+ (id)updateCachedKeyplaneKeycaps:(id)arg1;

@end
