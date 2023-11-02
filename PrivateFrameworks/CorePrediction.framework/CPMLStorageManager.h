
@interface CPMLStorageManager : NSObject

- (id)readValue:(id)arg1 withDoublePtr:(double*)arg2 withItemCount:(id)arg3;
- (id)readValue:(id)arg1 withIntPtr:(int*)arg2 withItemCount:(id)arg3;
- (id)readValue:(id)arg1 withUIntPtr:(unsigned int*)arg2 withItemCount:(id)arg3;
- (id)writeValue:(id)arg1 withDoublePtr:(double*)arg2 withItemCount:(id)arg3;
- (id)writeValue:(id)arg1 withIntPtr:(int*)arg2 withItemCount:(id)arg3;
- (id)writeValue:(id)arg1 withUIntPtr:(unsigned int*)arg2 withItemCount:(id)arg3;

@end
