
@interface CRKIDSMessageNotificationInfo : NSObject <CRKDictionaryCodable> {
    NSDictionary * _message;
    NSString * _senderAddress;
    NSString * _senderAppleID;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly, copy) NSDictionary *message;
@property (nonatomic, readonly, copy) NSString *senderAddress;
@property (nonatomic, readonly, copy) NSString *senderAppleID;

+ (id)instanceWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)dictionaryValue;
- (id)initWithMessage:(id)arg1 senderAppleID:(id)arg2 senderAddress:(id)arg3;
- (id)message;
- (id)senderAddress;
- (id)senderAppleID;

@end
