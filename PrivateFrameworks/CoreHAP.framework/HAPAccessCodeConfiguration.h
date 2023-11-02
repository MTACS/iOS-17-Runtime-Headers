
@interface HAPAccessCodeConfiguration : NSObject <HAPTLVProtocol, NSCopying> {
    HAPAccessCodeCharacterSetWrapper * _characterSet;
    HAPTLVUnsignedNumberValue * _maximumAccessCodes;
    HAPTLVUnsignedNumberValue * _maximumValueLength;
    HAPTLVUnsignedNumberValue * _minimumValueLength;
}

@property (nonatomic, retain) HAPAccessCodeCharacterSetWrapper *characterSet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *maximumAccessCodes;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *maximumValueLength;
@property (nonatomic, retain) HAPTLVUnsignedNumberValue *minimumValueLength;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)characterSet;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithCharacterSet:(id)arg1 minimumValueLength:(id)arg2 maximumValueLength:(id)arg3 maximumAccessCodes:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)maximumAccessCodes;
- (id)maximumValueLength;
- (id)minimumValueLength;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setCharacterSet:(id)arg1;
- (void)setMaximumAccessCodes:(id)arg1;
- (void)setMaximumValueLength:(id)arg1;
- (void)setMinimumValueLength:(id)arg1;

@end
