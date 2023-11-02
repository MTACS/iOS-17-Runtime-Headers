
@interface TypistKeyboardDataInputUIClient : NSObject <TypistKeyboardDataProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)addKeyboardPopupKeys:(id)arg1 keys:(id)arg2 inPlane:(id)arg3 addTo:(id)arg4 keyplaneKeycaps:(id)arg5;
+ (id)addKeyboards:(id)arg1;
+ (struct CGPoint { double x1; double x2; })centerOfKey:(struct CGPoint { double x1; double x2; })arg1 withOffset:(struct CGPoint { double x1; double x2; })arg2;
+ (bool)connectToRemoteKeyboard:(double)arg1;
+ (void)disconnectFromRemoteKeyboard;
+ (bool)dismissKeyboard;
+ (id)dismissOneTimeTIActions:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })findKeyBoundsInKeyboard:(id)arg1;
+ (struct CGPoint { double x1; double x2; })floatingKeyboardDraggablePoint;
+ (id)generateKeyplaneSwitchTable:(id)arg1;
+ (id)generateKeyplaneSwitchTableFor10Key:(id)arg1;
+ (id)getAllCandidates;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getCandidateBarRect;
+ (struct CGPoint { double x1; double x2; })getCandidateCenter:(id)arg1;
+ (struct CGPoint { double x1; double x2; })getCandidateCenterAtIndex:(long long)arg1;
+ (struct CGPoint { double x1; double x2; })getExtendedCandidateViewToggleButtonCenter;
+ (id)getKeyboardLayout:(id)arg1;
+ (id)getKeyboardUISettings;
+ (id)getKeyplaneDescription:(id)arg1;
+ (id)getRepresentedStringFromKey:(id)arg1;
+ (id)getSentenceBoundaryStrings;
+ (id)getTIPreferences;
+ (id)getVisibleCandidateList:(id)arg1;
+ (id)getVisibleKeyplaneName;
+ (bool)hasMarkedText;
+ (bool)isExtendedCandidateViewMode;
+ (id)markedText;
+ (id)removeKeyboards:(id)arg1;
+ (id)setKeyboardUISettings:(id)arg1;
+ (id)setKeyboards:(id)arg1;
+ (id)setTIPreferences:(id)arg1;
+ (void)showCandidateAtIndex:(long long)arg1;
+ (bool)switchToKeyboard:(id)arg1;
+ (bool)switchToPlane:(id)arg1;
+ (void)tryConnection;

@end
