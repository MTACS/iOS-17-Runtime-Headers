
@interface HAPCharacteristicValueTransitionFetch : NSObject <HAPTLVProtocol, NSCopying> {
    HAPTLVUnsignedNumberValue * _HAPInstanceID;
}

@property (nonatomic, retain) HAPTLVUnsignedNumberValue *HAPInstanceID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)HAPInstanceID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithHAPInstanceID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)serializeWithError:(id*)arg1;
- (void)setHAPInstanceID:(id)arg1;

@end
