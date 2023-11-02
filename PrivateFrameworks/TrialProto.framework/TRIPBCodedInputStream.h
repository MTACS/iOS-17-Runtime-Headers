
@interface TRIPBCodedInputStream : NSObject {
    NSData * buffer_;
    struct TRIPBCodedInputStreamState { 
        char *bytes; 
        unsigned long long bufferSize; 
        unsigned long long bufferPos; 
        unsigned long long currentLimit; 
        int lastTag; 
        unsigned long long recursionDepth; 
    }  state_;
}

+ (id)streamWithData:(id)arg1;

- (void)checkLastTagWas:(int)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (bool)isAtEnd;
- (void)popLimit:(unsigned long long)arg1;
- (unsigned long long)position;
- (unsigned long long)pushLimit:(unsigned long long)arg1;
- (bool)readBool;
- (id)readBytes;
- (double)readDouble;
- (int)readEnum;
- (unsigned int)readFixed32;
- (unsigned long long)readFixed64;
- (float)readFloat;
- (void)readGroup:(int)arg1 message:(id)arg2 extensionRegistry:(id)arg3;
- (int)readInt32;
- (long long)readInt64;
- (void)readMapEntry:(id)arg1 extensionRegistry:(id)arg2 field:(id)arg3 parentMessage:(id)arg4;
- (void)readMessage:(id)arg1 extensionRegistry:(id)arg2;
- (int)readSFixed32;
- (long long)readSFixed64;
- (int)readSInt32;
- (long long)readSInt64;
- (id)readString;
- (int)readTag;
- (unsigned int)readUInt32;
- (unsigned long long)readUInt64;
- (void)readUnknownGroup:(int)arg1 message:(id)arg2;
- (bool)skipField:(int)arg1;
- (void)skipMessage;

@end
