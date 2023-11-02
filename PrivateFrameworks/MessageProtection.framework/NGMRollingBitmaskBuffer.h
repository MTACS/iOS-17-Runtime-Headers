
@interface NGMRollingBitmaskBuffer : NSObject {
    unsigned int  _upper_buffer_index;
    char * _valid_values_buffer;
    unsigned int  _valid_values_buffer_size;
}

@property unsigned int upper_buffer_index;
@property char *valid_values_buffer;
@property unsigned int valid_values_buffer_size;

- (id)bufferData;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)arg1 upperBufferIndex:(unsigned int)arg2;
- (bool)processIncomingCounter:(unsigned int)arg1;
- (void)setUpper_buffer_index:(unsigned int)arg1;
- (void)setValid_values_buffer:(char *)arg1;
- (void)setValid_values_buffer_size:(unsigned int)arg1;
- (unsigned int)upper_buffer_index;
- (char *)valid_values_buffer;
- (unsigned int)valid_values_buffer_size;

@end
