
@interface SPRTLV : NSObject {
    NSArray * _children;
    unsigned int  _tag;
    NSData * _value;
}

@property (nonatomic, readonly) NSArray *children;
@property (nonatomic, readonly) unsigned int tag;
@property (nonatomic, readonly) NSData *value;

+ (id)TLVSsWithBytes:(const void*)arg1 length:(unsigned long long)arg2 requireDefiniteEncoding:(bool)arg3;
+ (id)TLVWithData:(id)arg1 simple:(bool)arg2;
+ (id)TLVWithTag:(unsigned int)arg1 children:(id)arg2;
+ (id)TLVWithTag:(unsigned int)arg1 fromData:(id)arg2;
+ (id)TLVWithTag:(unsigned int)arg1 unsignedChar:(unsigned char)arg2;
+ (id)TLVWithTag:(unsigned int)arg1 unsignedLongValue:(unsigned int)arg2;
+ (id)TLVWithTag:(unsigned int)arg1 value:(id)arg2;
+ (id)TLVsWithData:(id)arg1;
+ (id)TLVsWithData:(id)arg1 requireDefiniteEncoding:(bool)arg2;
+ (id)_intToData:(unsigned int)arg1;
+ (id)_parseTLVs:(const char **)arg1 end:(const char *)arg2 simple:(bool)arg3 definite:(bool)arg4;
+ (id)scanData:(id)arg1 forTag:(unsigned int)arg2;
+ (id)simpleTLVsWithData:(id)arg1;
+ (id)simpleTLVsWithTag:(unsigned int)arg1 fromData:(id)arg2;

- (void).cxx_destruct;
- (id)asData;
- (id)asMutableData;
- (id)childWithTag:(unsigned int)arg1;
- (id)children;
- (id)childrenWithTag:(unsigned int)arg1;
- (bool)containsTag:(unsigned int)arg1;
- (bool)containsValue:(id)arg1;
- (id)description;
- (unsigned int)tag;
- (id)value;
- (id)valueAsHexString;
- (id)valueAsString;
- (unsigned int)valueAsUnsignedLong;
- (unsigned long long)valueAsUnsignedLongLong;
- (unsigned short)valueAsUnsignedShort;

@end
