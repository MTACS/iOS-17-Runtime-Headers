
@interface VisionCoreE5RTUtils : NSObject

+ (bool)getPixelFormatType:(unsigned int*)arg1 forSurfaceFormat:(int)arg2 error:(id*)arg3;
+ (bool)getTensorDataType:(unsigned long long*)arg1 forTensorDescriptor:(struct e5rt_tensor_desc { }*)arg2 error:(id*)arg3;
+ (bool)getType:(unsigned long long*)arg1 ofIOPort:(struct e5rt_io_port { }*)arg2 error:(id*)arg3;
+ (id)stringsForHandle:(void*)arg1 fromCountProc:(int (*)arg2 stringsProc:(int (*)arg3 error:(id*)arg4;

@end
