
@interface VCPHumanPoseVideoRequest : VCPRequest {
    VCPImageHumanPoseAnalyzer * _analyzer;
    NSArray * _existingPersons;
    NSMutableArray * _existingPersonsArray;
    int  _personID;
    unsigned int  _preferredFormat;
    int  _preferredHeight;
    int  _preferredWidth;
}

- (void).cxx_destruct;
- (int)associatePersons:(id)arg1 withExisingPersons:(id)arg2;
- (float)bodyDistance:(id)arg1 withBodyB:(id)arg2;
- (bool)cleanupWithOptions:(id)arg1 error:(id*)arg2;
- (void)computeActionScoreForPerson:(id)arg1;
- (void)computeVarWithID:(id)arg1 index1:(int)arg2 index2:(int)arg3 interVar:(float*)arg4 intraVar:(float*)arg5;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (float)normDistance:(struct CGPoint { double x1; double x2; })arg1 point2:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGSize { double x1; double x2; })preferredInputSizeWithOptions:(id)arg1 error:(id*)arg2;
- (unsigned int)preferredPixelFormat;
- (id)processSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 withOptions:(id)arg2 error:(id*)arg3;

@end
