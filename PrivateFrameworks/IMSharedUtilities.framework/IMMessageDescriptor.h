
@interface IMMessageDescriptor : NSObject {
    NSAttributedString * _messageBody;
    NSString * _messageGUID;
    NSArray * _messageParts;
}

@property (nonatomic, readonly, copy) NSAttributedString *messageBody;
@property (nonatomic, readonly, copy) NSString *messageGUID;
@property (nonatomic, readonly) NSArray *messageParts;

- (void).cxx_destruct;
- (id)initWithMessageBody:(id)arg1 messageGUID:(id)arg2;
- (id)messageBody;
- (id)messageGUID;
- (id)messageParts;

@end
