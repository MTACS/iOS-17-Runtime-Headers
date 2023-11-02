
@interface CVNLPCaptionSensitiveImageParameters : NSObject {
    NSArray * _blockingTokens;
    double  _minConfidence;
    NSString * _visionIdentifier;
}

@property (nonatomic, readonly) NSArray *blockingTokens;
@property (nonatomic, readonly) double minConfidence;
@property (nonatomic, readonly) NSString *visionIdentifier;

- (void).cxx_destruct;
- (id)blockingTokens;
- (id)initWithVisionIdentifier:(id)arg1 minConfidence:(double)arg2 commonBlockingTokens:(id)arg3 categoryBlockingTokens:(id)arg4 categoryBlockingTokensAnnex:(id)arg5;
- (double)minConfidence;
- (id)visionIdentifier;

@end
