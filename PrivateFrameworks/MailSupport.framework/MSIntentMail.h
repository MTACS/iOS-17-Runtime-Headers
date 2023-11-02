
@interface MSIntentMail : INObject

@property (nonatomic, copy) NSArray *bcc;
@property (nonatomic, copy) NSString *body;
@property (nonatomic, copy) NSArray *cc;
@property (nonatomic, copy) NSDateComponents *dateSent;
@property (nonatomic, copy) INPerson *sender;
@property (nonatomic, copy) NSString *subject;
@property (nonatomic, copy) NSArray *to;

@end
