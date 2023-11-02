
@interface APCCodecFactory : NSObject

+ (id)createBestConfigForCapability:(id)arg1;
+ (struct unique_ptr<APCDecoderBase, std::default_delete<APCDecoderBase>> { struct __compressed_pair<APCDecoderBase *, std::default_delete<APCDecoderBase>> { struct APCDecoderBase {} *x_1_1_1; } x1; })createDecoderWithConfig:(id)arg1 apcConfig:(void*)arg2 error:(id*)arg3;
+ (struct unique_ptr<APCEncoderBase, std::default_delete<APCEncoderBase>> { struct __compressed_pair<APCEncoderBase *, std::default_delete<APCEncoderBase>> { struct APCEncoderBase {} *x_1_1_1; } x1; })createEncoderWithConfig:(id)arg1 apcConfig:(void*)arg2 payloadData:(id)arg3;
+ (float)evaluateCarrierWithConfig:(id)arg1 carrier:(id)arg2 embeddingResult:(id*)arg3;

@end
