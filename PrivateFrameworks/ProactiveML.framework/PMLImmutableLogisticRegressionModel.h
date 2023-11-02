
@interface PMLImmutableLogisticRegressionModel : NSObject <PMLMultiLabelClassifierProtocol, PMLPlistAndChunksSerializableProtocol> {
    id  _backingObject;
    bool  _intercept;
    int  _length;
    const float * _weights;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithChunk:(id)arg1 intercept:(bool)arg2;
- (id)initWithFloatsNoCopy:(const float*)arg1 count:(int)arg2 intercept:(bool)arg3;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithWeights:(id)arg1 intercept:(bool)arg2;
- (bool)intercept;
- (unsigned long long)outputDimension;
- (id)predict:(id)arg1;
- (id)toChunk;
- (id)toPlistWithChunks:(id)arg1;

@end
