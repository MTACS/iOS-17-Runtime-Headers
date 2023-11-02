
@interface HMIDESLayerParameters : HMFObject {
    HMIDESMutableFloatArray * _biases;
    NSString * _name;
    HMIDESMutableFloatArray * _weights;
}

@property (readonly) HMIDESMutableFloatArray *biases;
@property (readonly) NSString *name;
@property (readonly) HMIDESMutableFloatArray *weights;

- (void).cxx_destruct;
- (id)biases;
- (id)initWithName:(id)arg1 weights:(id)arg2 biases:(id)arg3;
- (id)name;
- (id)weights;

@end
