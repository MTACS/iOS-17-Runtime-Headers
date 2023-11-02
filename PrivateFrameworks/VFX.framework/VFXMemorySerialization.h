
@interface VFXMemorySerialization : NSObject

+ (int)VFXSerializedBufferSize:(void*)arg1 type:(long long)arg2;
+ (bool)readBool:(void*)arg1;
+ (double)readDouble:(void*)arg1;
+ (float)readFloat:(void*)arg1;
+ (struct CGGradient { }*)readGradient:(void*)arg1;
+ (short)readInt16:(void*)arg1;
+ (int)readInt32:(void*)arg1;
+ (long long)readInt64:(void*)arg1;
+ (BOOL)readInt8:(void*)arg1;
+ (long long)readInt:(void*)arg1;
+ (void)readSIMD2D:(void*)arg1;
+ (void)readSIMD2F:(void*)arg1;
+ (void)readSIMD3D:(void*)arg1;
+ (void)readSIMD3F:(void*)arg1;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })readSIMD3x3D:(void*)arg1;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })readSIMD3x3F:(void*)arg1;
+ (void)readSIMD4D:(void*)arg1;
+ (void)readSIMD4F:(void*)arg1;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })readSIMD4x4D:(void*)arg1;
+ (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })readSIMD4x4F:(void*)arg1;
+ (id)readString:(void*)arg1;
+ (unsigned short)readUInt16:(void*)arg1;
+ (unsigned int)readUInt32:(void*)arg1;
+ (unsigned long long)readUInt64:(void*)arg1;
+ (unsigned char)readUInt8:(void*)arg1;
+ (void)writeBool:(bool)arg1 to:(void*)arg2;
+ (void)writeDouble:(double)arg1 to:(void*)arg2;
+ (void)writeFloat:(float)arg1 to:(void*)arg2;
+ (void)writeGradient:(struct CGGradient { }*)arg1 to:(void*)arg2;
+ (void)writeInt16:(short)arg1 to:(void*)arg2;
+ (void)writeInt32:(int)arg1 to:(void*)arg2;
+ (void)writeInt64:(long long)arg1 to:(void*)arg2;
+ (void)writeInt8:(BOOL)arg1 to:(void*)arg2;
+ (void)writeInt:(long long)arg1 to:(void*)arg2;
+ (void)writeSIMD2D:(void *)arg1 to:(void *)arg2; // needs 2 arg types, found 1: void*
+ (void)writeSIMD2F:(void *)arg1 to:(void *)arg2; // needs 2 arg types, found 1: void*
+ (void)writeSIMD3D:(void *)arg1 to:(void *)arg2; // needs 2 arg types, found 1: void*
+ (void)writeSIMD3F:(void *)arg1 to:(void *)arg2; // needs 2 arg types, found 1: void*
+ (void)writeSIMD3x3D:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 to:(void*)arg2;
+ (void)writeSIMD3x3F:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1 to:(void*)arg2;
+ (void)writeSIMD4D:(void *)arg1 to:(void *)arg2; // needs 2 arg types, found 1: void*
+ (void)writeSIMD4F:(void *)arg1 to:(void *)arg2; // needs 2 arg types, found 1: void*
+ (void)writeSIMD4x4D:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 to:(void*)arg2;
+ (void)writeSIMD4x4F:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1 to:(void*)arg2;
+ (void)writeString:(id)arg1 to:(void*)arg2;
+ (void)writeUInt16:(unsigned short)arg1 to:(void*)arg2;
+ (void)writeUInt32:(unsigned int)arg1 to:(void*)arg2;
+ (void)writeUInt64:(unsigned long long)arg1 to:(void*)arg2;
+ (void)writeUInt8:(unsigned char)arg1 to:(void*)arg2;

- (id)init;

@end
