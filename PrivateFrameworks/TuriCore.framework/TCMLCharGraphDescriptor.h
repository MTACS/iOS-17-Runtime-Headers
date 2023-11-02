
@interface TCMLCharGraphDescriptor : NSObject {
    NSDictionary * _additionDescs;
    NSDictionary * _averagePoolDesc;
    NSDictionary * _batchNormDescs;
    NSDictionary * _catDescs;
    NSDictionary * _chunkDescs;
    NSDictionary * _convDescs;
    NSDictionary * _dropoutDescs;
    NSDictionary * _transposeDescs;
}

@property (nonatomic, retain) NSDictionary *additionDescs;
@property (nonatomic, retain) NSDictionary *averagePoolDesc;
@property (nonatomic, retain) NSDictionary *batchNormDescs;
@property (nonatomic, retain) NSDictionary *catDescs;
@property (nonatomic, retain) NSDictionary *chunkDescs;
@property (nonatomic, retain) NSDictionary *convDescs;
@property (nonatomic, retain) NSDictionary *dropoutDescs;
@property (nonatomic, retain) NSDictionary *transposeDescs;

- (void).cxx_destruct;
- (id)additionDescs;
- (id)averagePoolDesc;
- (id)batchNormDescs;
- (id)catDescs;
- (id)chunkDescs;
- (id)convDescs;
- (id)dropoutDescs;
- (void)setAdditionDescs:(id)arg1;
- (void)setAveragePoolDesc:(id)arg1;
- (void)setBatchNormDescs:(id)arg1;
- (void)setCatDescs:(id)arg1;
- (void)setChunkDescs:(id)arg1;
- (void)setConvDescs:(id)arg1;
- (void)setDropoutDescs:(id)arg1;
- (void)setTransposeDescs:(id)arg1;
- (id)transposeDescs;

@end
