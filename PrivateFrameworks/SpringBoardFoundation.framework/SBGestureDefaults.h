
@interface SBGestureDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic, readonly) bool multitaskingGesturesRequireEducation;
@property (nonatomic, readonly) bool productivityGesturesAllowed;
@property (nonatomic, readonly) bool productivityGesturesRequireEducation;
@property (nonatomic, retain) NSArray *systemGestureLoggingOptions;
@property (getter=isSystemGesturesAllowed, nonatomic, readonly) bool systemGesturesAllowed;

- (void)_bindAndRegisterDefaults;

@end
