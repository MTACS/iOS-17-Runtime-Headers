
@interface WFAskForInputIntent : INIntent

@property (nonatomic, copy) NSNumber *allowsDecimalNumbers;
@property (nonatomic, copy) NSNumber *allowsMultilineText;
@property (nonatomic, copy) NSNumber *allowsNegativeNumbers;
@property (nonatomic, copy) NSDateComponents *dateAndTimeAnswer;
@property (nonatomic, copy) NSDateComponents *dateAnswer;
@property (nonatomic, copy) NSString *defaultURLAnswer;
@property (nonatomic, copy) NSNumber *numberAnswer;
@property (nonatomic, copy) NSString *question;
@property (nonatomic, copy) NSString *stringAnswer;
@property (nonatomic, copy) NSDateComponents *timeAnswer;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSURL *urlAnswer;

@end
