
@interface SHSignatureGenerator : NSObject {
    SHMutableSignature * _mutableSignature;
}

@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double maximumDuration;
@property (nonatomic, retain) SHMutableSignature *mutableSignature;

+ (void)generateSignatureFromAsset:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (bool)appendBuffer:(id)arg1 atTime:(id)arg2 error:(id*)arg3;
- (void)disableSpectralOutput;
- (double)duration;
- (void)enableSpectralOutput;
- (id)init;
- (id)initSignatureRingBufferWithDuration:(double)arg1;
- (id)initWithMaximumSignatureDuration:(double)arg1;
- (id)initWithMutableSignature:(id)arg1;
- (double)maximumDuration;
- (id)mutableSignature;
- (void)setMutableSignature:(id)arg1;
- (id)signature;
- (bool)updateRingBufferDuration:(double)arg1 error:(id*)arg2;

@end
