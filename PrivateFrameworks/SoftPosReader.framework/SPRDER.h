
@interface SPRDER : NSObject

+ (id)DERDecodeData:(id)arg1;
+ (id)DERDecodeData:(id)arg1 expectedSingleByteTag:(unsigned char)arg2;
+ (id)DERDecodeData:(id)arg1 expectedTag:(unsigned long long)arg2;
+ (bool)DERDecodeSequenceContentWithData:(id)arg1 block:(id /* block */)arg2;
+ (bool)DERDecodeSequenceWithData:(id)arg1 block:(id /* block */)arg2;
+ (id)DEREncodeData:(id)arg1 singleByteTag:(unsigned char)arg2;
+ (id)DEREncodeData:(id)arg1 tag:(unsigned long long)arg2;
+ (bool)DERParseSEFWSequence:(struct { char *x1; unsigned long long x2; }*)arg1 info:(struct { struct { char *x_1_1_1; unsigned long long x_1_1_2; } x1; struct { char *x_2_1_1; unsigned long long x_2_1_2; } x2; }*)arg2;
+ (id)DERParseScriptInfo:(id)arg1;
+ (bool)DERParseScriptSequence:(struct { char *x1; unsigned long long x2; }*)arg1 info:(struct { struct { char *x_1_1_1; unsigned long long x_1_1_2; } x1; struct { char *x_2_1_1; unsigned long long x_2_1_2; } x2; struct { char *x_3_1_1; unsigned long long x_3_1_2; } x3; struct { char *x_4_1_1; unsigned long long x_4_1_2; } x4; struct { char *x_5_1_1; unsigned long long x_5_1_2; } x5; struct { char *x_6_1_1; unsigned long long x_6_1_2; } x6; }*)arg2;

@end
