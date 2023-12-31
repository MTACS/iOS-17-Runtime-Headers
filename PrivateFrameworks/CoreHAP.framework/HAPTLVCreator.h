
@interface HAPTLVCreator : HMFObject {
    bool  _addHasFailed;
    struct { 
        char *ptr; 
        unsigned long long len; 
        unsigned long long maxLen; 
        char *mallocedPtr; 
        unsigned char inlineBuffer[300]; 
    }  _tlv;
}

+ (id)creator;
+ (id)creatorWithBufferSize:(unsigned long long)arg1;

- (bool)addTLV:(unsigned long long)arg1 data:(id)arg2;
- (bool)addTLV:(unsigned long long)arg1 length:(unsigned long long)arg2 floatNumber:(id)arg3;
- (bool)addTLV:(unsigned long long)arg1 length:(unsigned long long)arg2 number:(id)arg3;
- (bool)addTLV:(unsigned long long)arg1 number:(id)arg2;
- (bool)addTLV:(unsigned long long)arg1 string:(id)arg2;
- (bool)addTLV:(unsigned long long)arg1 uuid:(id)arg2;
- (void)dealloc;
- (id)initWithBufferSize:(unsigned long long)arg1;
- (id)serialize;

@end
