
@interface WFAskForInputResult : INObject

@property (nonatomic, copy) NSDateComponents *dateAndTimeValue;
@property (nonatomic, copy) NSDateComponents *dateValue;
@property (nonatomic, copy) NSNumber *numberValue;
@property (nonatomic, copy) NSString *stringValue;
@property (nonatomic, copy) NSDateComponents *timeValue;
@property (nonatomic) long long type;
@property (nonatomic, copy) NSURL *urlValue;

@end
