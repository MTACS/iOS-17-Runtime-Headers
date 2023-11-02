
@interface WFSmartPromptIntent : INIntent

@property (nonatomic, copy) NSArray *buttons;
@property (nonatomic, copy) INFile *privacyIcon;
@property (nonatomic, copy) NSString *privacyTitle;
@property (nonatomic, copy) NSString *promptMessage;
@property (nonatomic, copy) WFSmartPromptButton *selectedButton;

@end
