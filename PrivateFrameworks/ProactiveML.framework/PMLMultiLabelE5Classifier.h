
@interface PMLMultiLabelE5Classifier : NSObject <PMLMultiLabelClassifierProtocol> {
    struct e5rt_execution_stream { } * _execution_stream;
    unsigned long long  _inputNumParameters;
    struct e5rt_buffer_object { } * _input_buffer;
    float * _input_ids;
    struct e5rt_io_port { } * _input_port;
    struct e5rt_tensor_desc { } * _input_tensor;
    struct e5rt_tensor_desc_dtype { } * _input_tensor_dtype;
    struct e5rt_execution_stream_operation { } * _main_esop;
    unsigned long long  _outputNumParameters;
    struct e5rt_buffer_object { } * _output_buffer;
    struct e5rt_io_port { } * _output_port;
    float * _output_scores;
    struct e5rt_tensor_desc { } * _output_tensor;
    struct e5rt_tensor_desc_dtype { } * _output_tensor_dtype;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)classifierWithE5File:(id)arg1;

- (void)dealloc;
- (id)initWithE5File:(id)arg1;
- (bool)initializeNetworkWithE5File:(id)arg1;
- (unsigned long long)outputDimension;
- (id)predict:(id)arg1;

@end
