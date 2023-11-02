
@interface UIAccessibilityHUDPositionManager : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardAvoidanceArea;
    NSMapTable * _managedHUDs;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2;
- (void)adjustViewPropertiesForHUD:(id)arg1 withReferenceView:(id)arg2 keyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)beginManagingPositionOfHUD:(id)arg1 withReferenceView:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)keyboardFrameDidChange:(id)arg1;
- (void)stopManagingPositionOfHUD:(id)arg1;
- (void)updateFramesForManagedHUDsUsingKeyboardFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
