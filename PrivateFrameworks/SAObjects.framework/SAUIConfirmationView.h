
@interface SAUIConfirmationView : SAAceView

@property (nonatomic, copy) NSArray *allConfirmationOptions;
@property (nonatomic, copy) NSString *cancelTrigger;
@property (nonatomic, copy) NSArray *confirmCommands;
@property (nonatomic, copy) NSString *confirmText;
@property (nonatomic, copy) NSArray *denyCommands;
@property (nonatomic, copy) NSString *denyText;
@property (nonatomic, copy) NSNumber *generateForegroundAppSearchButtonLabel;
@property (nonatomic, copy) NSString *style;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)confirmationView;
+ (id)confirmationViewWithDictionary:(id)arg1 context:(id)arg2;

- (id)allConfirmationOptions;
- (id)cancelTrigger;
- (id)confirmCommands;
- (id)confirmText;
- (id)denyCommands;
- (id)denyText;
- (id)encodedClassName;
- (id)generateForegroundAppSearchButtonLabel;
- (id)groupIdentifier;
- (void)setAllConfirmationOptions:(id)arg1;
- (void)setCancelTrigger:(id)arg1;
- (void)setConfirmCommands:(id)arg1;
- (void)setConfirmText:(id)arg1;
- (void)setDenyCommands:(id)arg1;
- (void)setDenyText:(id)arg1;
- (void)setGenerateForegroundAppSearchButtonLabel:(id)arg1;
- (void)setStyle:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)style;
- (id)subtitle;
- (id)title;

// Image: /System/Library/PrivateFrameworks/SiriUIFoundation.framework/SiriUIFoundation

- (bool)sruif_hasButton;

@end
