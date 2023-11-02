
@interface CVNLPCTCTextDecoder : CVNLPTextDecoder <CVNLPTextDecoding> {
    CVNLPActivationMatrix * _activationMatrix;
}

@property (nonatomic, retain) CVNLPActivationMatrix *activationMatrix;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activationMatrix;
- (id)decodingResultForKBestPaths:(unsigned long long)arg1 withBeamWidth:(unsigned long long)arg2;
- (id)decodingResultForKBestPaths:(unsigned long long)arg1 withBeamWidth:(unsigned long long)arg2 context:(id)arg3;
- (id)decodingResultForKBestPaths:(unsigned long long)arg1 withBeamWidth:(unsigned long long)arg2 context:(id)arg3 optimizeAlignment:(bool)arg4;
- (id)decodingResultWithConfiguration:(id)arg1 withContext:(id)arg2;
- (id)greedyDecodingResult;
- (id)greedyDecodingResultWithConfiguration:(id)arg1;
- (id)initWithLanguageResourceBundle:(id)arg1;
- (void)setActivationMatrix:(id)arg1;

@end
