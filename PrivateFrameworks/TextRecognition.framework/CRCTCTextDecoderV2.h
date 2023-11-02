
@interface CRCTCTextDecoderV2 : CRCTCCVNLPTextDecoder

+ (id)lmSupportedLanguages;

- (struct CVNLPTextDecodingPruningPolicy { long long x1; bool x2; float x3; unsigned int x4; })pruningPolicy;
- (bool)shouldUseModernizedDecoder;

@end
