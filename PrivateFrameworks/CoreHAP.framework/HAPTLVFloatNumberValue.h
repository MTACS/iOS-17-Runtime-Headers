
@interface HAPTLVFloatNumberValue : HAPTLVNumberValueBase

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (id)_parseFromData:(const char *)arg1 length:(unsigned long long)arg2 status:(int*)arg3;
- (id)_serialize;
- (id)description;

@end
