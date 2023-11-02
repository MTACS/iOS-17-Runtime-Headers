
@interface IDSSessionInfoMetadataSerializer : NSObject

+ (id)_readArrayFromByteArray:(char *)arg1 fieldByteSize:(unsigned short)arg2 byteBuffer:(struct { char *x1; char *x2; char *x3; char *x4; bool x5; }*)arg3;
+ (id)_readDictionaryFromByteArray:(char *)arg1 fieldByteSize:(unsigned short)arg2 byteBuffer:(struct { char *x1; char *x2; char *x3; char *x4; bool x5; }*)arg3;
+ (void)_writeArrayToByteBuffer:(id)arg1 buffer:(struct { char *x1; char *x2; char *x3; char *x4; bool x5; }*)arg2;
+ (void)_writeDictionaryToByteBuffer:(id)arg1 buffer:(struct { char *x1; char *x2; char *x3; char *x4; bool x5; }*)arg2;
+ (void)_writeNumberToByteBuffer:(id)arg1 buffer:(struct { char *x1; char *x2; char *x3; char *x4; bool x5; }*)arg2;
+ (void)_writeStringToByteBuffer:(id)arg1 buffer:(struct { char *x1; char *x2; char *x3; char *x4; bool x5; }*)arg2;
+ (id)deserializeSessionInfoMetadata:(id)arg1;
+ (id)serializeSessionInfoMetadata:(id)arg1;

@end
