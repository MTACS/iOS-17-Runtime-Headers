
@protocol HAL_DSP_IOProcessor <NSObject>

@required

- (NSDictionary *)adaptToConfigurationChange:(NSDictionary *)arg1 withCallbacks:(void*)arg2 error:(id*)arg3;
- (NSData *)getCustomProperty:(struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (NSDictionary *)getCustomPropertyList;
- (bool)hasCustomProperty:(struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (NSDictionary *)negotiateConfigurationChange:(NSDictionary *)arg1 error:(id*)arg2;
- (NSDictionary *)retrieveFormats:(NSDictionary *)arg1 error:(id*)arg2;
- (bool)setCustomProperty:(struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })arg1 withData:(NSData *)arg2 error:(id*)arg3;

@end
