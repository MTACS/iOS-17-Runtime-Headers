
@interface SASStartAsrOnServerRequest : SASStartSpeechRequest

@property (nonatomic, copy) NSNumber *runCamFtm;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)runCamFtm;
- (void)setRunCamFtm:(id)arg1;

@end
