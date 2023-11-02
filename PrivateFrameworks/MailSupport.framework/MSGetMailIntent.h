
@interface MSGetMailIntent : INIntent

@property (nonatomic) long long readStatus;
@property (nonatomic, copy) INPerson *recipient;
@property (nonatomic, copy) INPerson *sender;
@property (nonatomic, copy) NSString *subject;

@end
