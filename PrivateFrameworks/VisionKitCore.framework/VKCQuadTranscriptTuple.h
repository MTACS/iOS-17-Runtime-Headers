
@interface VKCQuadTranscriptTuple : NSObject {
    VKQuad * _quad;
    NSString * _transcript;
}

@property (nonatomic, retain) VKQuad *quad;
@property (nonatomic, retain) NSString *transcript;

- (void).cxx_destruct;
- (id)quad;
- (void)setQuad:(id)arg1;
- (void)setTranscript:(id)arg1;
- (id)transcript;

@end
