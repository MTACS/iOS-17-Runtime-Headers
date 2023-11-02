
@interface HAPCharacteristicNotificationContext : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _clockTickCounter;
    HAPTLVUnsignedNumberValue * _contextIdentifier;
    HAPNotificationContextSourceWrapper * _source;
}

@property (nonatomic, retain) HAPTLVUnsignedNumberValue *clockTickCounter;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *contextIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPNotificationContextSourceWrapper *source;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)clockTickCounter;
- (id)contextIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithContextIdentifier:(id)arg1 source:(id)arg2 clockTickCounter:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setClockTickCounter:(id)arg1;
- (void)setContextIdentifier:(id)arg1;
- (void)setSource:(id)arg1;
- (id)source;

@end
