
@interface CBORValue : NSObject

@property (nonatomic, readonly) int fieldType;
@property (nonatomic, readonly) unsigned char fieldValue;

- (void)encodeStartItems:(unsigned long long)arg1 output:(id)arg2;
- (int)fieldType;
- (unsigned char)fieldValue;
- (unsigned long long)getNumUintBytes:(unsigned long long)arg1;
- (void)setAdditionalInformation:(unsigned char)arg1 item2:(unsigned char)arg2 output:(id)arg3;
- (void)setUint:(unsigned char)arg1 item2:(unsigned long long)arg2 output:(id)arg3;
- (void)write:(id)arg1;

@end
