
@interface HAPAccessCodeControlRequest : NSObject <HAPTLVProtocol, NSCopying> {
    NSString * _accessCode;
    HAPTLVUnsignedNumberValue * _identifier;
}

@property (nonatomic, retain) NSString *accessCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *identifier;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)accessCode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 accessCode:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setAccessCode:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
