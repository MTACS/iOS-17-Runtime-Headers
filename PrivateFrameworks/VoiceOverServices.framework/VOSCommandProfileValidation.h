
@interface VOSCommandProfileValidation : NSObject {
    VOSCommand * _previouslyBoundCommand;
    long long  _validationType;
}

@property (nonatomic, readonly) bool isGestureAlreadyAssignedToCommand;
@property (nonatomic, readonly) bool isGestureAssignedToOtherCommand;
@property (nonatomic, readonly) bool isKeyboardShortcutAlreadyAssignedToCommand;
@property (nonatomic, readonly) bool isKeyboardShortcutAssignedToOtherCommand;
@property (nonatomic, readonly) bool isSuccessful;
@property (nonatomic, readonly) NSString *localizedErrorMessage;
@property (nonatomic, readonly) NSString *localizedErrorTitle;
@property (nonatomic, retain) VOSCommand *previouslyBoundCommand;

+ (id)gestureAssignedToOtherCommandValidation:(id)arg1;
+ (id)gestureIsRequiredValidation;
+ (id)keyboardShortcutAssignedToOtherCommandValidation:(id)arg1;
+ (id)successfulValidation;

- (void).cxx_destruct;
- (id)init;
- (id)initWithType:(long long)arg1;
- (bool)isGestureAlreadyAssignedToCommand;
- (bool)isGestureAssignedToOtherCommand;
- (bool)isKeyboardShortcutAlreadyAssignedToCommand;
- (bool)isKeyboardShortcutAssignedToOtherCommand;
- (bool)isSuccessful;
- (id)localizedErrorMessage;
- (id)localizedErrorTitle;
- (id)previouslyBoundCommand;
- (void)setPreviouslyBoundCommand:(id)arg1;

@end
