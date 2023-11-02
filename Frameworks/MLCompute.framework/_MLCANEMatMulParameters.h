
@interface _MLCANEMatMulParameters : NSObject {
    NSDictionary * _finalTransposeParams;
    NSDictionary * _gocParams;
    NSDictionary * _matMulParams;
    NSDictionary * _transposeXParams;
    NSDictionary * _transposeYParams;
}

@property (nonatomic, readonly, retain) NSDictionary *finalTransposeParams;
@property (nonatomic, readonly, retain) NSDictionary *gocParams;
@property (nonatomic, readonly, retain) NSDictionary *matMulParams;
@property (nonatomic, readonly, retain) NSDictionary *transposeXParams;
@property (nonatomic, readonly, retain) NSDictionary *transposeYParams;

+ (id)matMulUnitParametersWith:(id)arg1 transposeXParams:(id)arg2 transposeYParams:(id)arg3 finalTransposeParams:(id)arg4 gocParams:(id)arg5;

- (void).cxx_destruct;
- (id)finalTransposeParams;
- (id)gocParams;
- (id)initWithMatMulParams:(id)arg1 transposeXParams:(id)arg2 transposeYParams:(id)arg3 finalTransposeParams:(id)arg4 gocParams:(id)arg5;
- (id)matMulParams;
- (id)transposeXParams;
- (id)transposeYParams;

@end
