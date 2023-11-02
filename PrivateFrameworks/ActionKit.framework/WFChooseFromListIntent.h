
@interface WFChooseFromListIntent : INIntent

@property (nonatomic, copy) NSArray *chosenItems;
@property (nonatomic, copy) NSArray *originalItems;
@property (nonatomic, copy) NSString *prompt;

@end
