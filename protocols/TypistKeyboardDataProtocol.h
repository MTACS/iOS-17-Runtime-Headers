
@protocol TypistKeyboardDataProtocol <NSObject>

@required

+ (NSMutableDictionary *)addKeyboardPopupKeys:(TypistKeyboard *)arg1 keys:(NSArray *)arg2 inPlane:(NSString *)arg3 addTo:(NSMutableDictionary *)arg4 keyplaneKeycaps:(NSMutableSet *)arg5;
+ (NSArray *)addKeyboards:(NSArray *)arg1;
+ (struct CGPoint { double x1; double x2; })centerOfKey:(struct CGPoint { double x1; double x2; })arg1 withOffset:(struct CGPoint { double x1; double x2; })arg2;
+ (bool)dismissKeyboard;
+ (NSDictionary *)dismissOneTimeTIActions:(NSDictionary *)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })findKeyBoundsInKeyboard:(NSString *)arg1;
+ (struct CGPoint { double x1; double x2; })floatingKeyboardDraggablePoint;
+ (NSMutableDictionary *)generateKeyplaneSwitchTable:(NSArray *)arg1;
+ (NSMutableDictionary *)generateKeyplaneSwitchTableFor10Key:(NSArray *)arg1;
+ (NSArray *)getAllCandidates;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })getCandidateBarRect;
+ (struct CGPoint { double x1; double x2; })getCandidateCenter:(NSString *)arg1;
+ (struct CGPoint { double x1; double x2; })getCandidateCenterAtIndex:(long long)arg1;
+ (struct CGPoint { double x1; double x2; })getExtendedCandidateViewToggleButtonCenter;
+ (NSDictionary *)getKeyboardLayout:(TypistKeyboard *)arg1;
+ (NSDictionary *)getKeyboardUISettings;
+ (TypistKeyplane *)getKeyplaneDescription:(NSString *)arg1;
+ (NSString *)getRepresentedStringFromKey:(NSString *)arg1;
+ (NSDictionary *)getSentenceBoundaryStrings;
+ (NSDictionary *)getTIPreferences;
+ (NSArray *)getVisibleCandidateList:(NSString *)arg1;
+ (NSString *)getVisibleKeyplaneName;
+ (bool)hasMarkedText;
+ (bool)isExtendedCandidateViewMode;
+ (NSString *)markedText;
+ (NSArray *)removeKeyboards:(NSArray *)arg1;
+ (NSDictionary *)setKeyboardUISettings:(NSDictionary *)arg1;
+ (NSArray *)setKeyboards:(NSArray *)arg1;
+ (NSDictionary *)setTIPreferences:(NSDictionary *)arg1;
+ (void)showCandidateAtIndex:(long long)arg1;
+ (bool)switchToKeyboard:(NSString *)arg1;
+ (bool)switchToPlane:(NSString *)arg1;

@end
