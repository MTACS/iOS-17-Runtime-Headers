
@interface ARBufferPopulationRegistry : NSObject {
    NSMutableDictionary * _bufferToLabelLUT;
    NSMutableDictionary * _bufferToTimestampLUT;
    NSMutableDictionary * _labelToBuffersLUT;
    NSMutableDictionary * _labelToSignpostTypeLUT;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (unsigned long long)count;
- (unsigned long long)countWithLabel:(id)arg1;
- (id)description;
- (id)init;
- (id)labelForBufferWithSurfaceID:(id)arg1;
- (void)registerBufferWithSurfaceID:(id)arg1 label:(id)arg2 signpostType:(id)arg3 timestamp:(double)arg4;
- (int)signpostTypeForLabel:(id)arg1;
- (id)surfaceIDsForBuffersWithLabel:(id)arg1;
- (double)timestampForSurfaceID:(id)arg1;
- (void)unregisterBufferWithSurfaceID:(id)arg1;

@end
