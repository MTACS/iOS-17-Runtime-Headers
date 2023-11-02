
@interface HAPAccessCodeControlResponse : NSObject <HAPTLVProtocol, NSCopying> {
    NSString * _accessCode;
    HAPAccessCodeFlagsWrapper * _flags;
    HAPTLVUnsignedNumberValue * _identifier;
    HAPAccessCodeResponseStatusWrapper * _statusCode;
}

@property (nonatomic, retain) NSString *accessCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HAPAccessCodeFlagsWrapper *flags;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *identifier;
@property (nonatomic, retain) HAPAccessCodeResponseStatusWrapper *statusCode;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)accessCode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)flags;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 accessCode:(id)arg2 flags:(id)arg3 statusCode:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setAccessCode:(id)arg1;
- (void)setFlags:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setStatusCode:(id)arg1;
- (id)statusCode;

@end
