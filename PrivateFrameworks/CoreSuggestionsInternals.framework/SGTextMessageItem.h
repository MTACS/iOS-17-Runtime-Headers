
@interface SGTextMessageItem : NSObject <NSSecureCoding, SGConversationTurnProtocol> {
    NSArray * _detectedData;
    NSArray * _features;
    NSString * _language;
    SGTextMessage * _message;
    NSString * _senderID;
    NSString * _text;
    NSDate * _timestamp;
}

@property (readonly) NSArray *detectedData;
@property (retain) NSArray *features;
@property (readonly) NSString *language;
@property (readonly) SGTextMessage *message;
@property (nonatomic, readonly) NSString *senderID;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSDate *timestamp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)detectedData;
- (void)encodeWithCoder:(id)arg1;
- (id)features;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextMessage:(id)arg1;
- (id)initWithTextMessage:(id)arg1 detectedData:(id)arg2;
- (bool)isEqualToConversationTurn:(id)arg1;
- (id)language;
- (id)message;
- (id)senderID;
- (void)setFeatures:(id)arg1;
- (id)text;
- (id)timestamp;

@end
