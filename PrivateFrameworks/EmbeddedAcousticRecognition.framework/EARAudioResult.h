
@interface EARAudioResult : NSObject {
    NSData * _audioResultMat;
    unsigned long long  _audioResultsNumVectors;
    unsigned long long  _audioResultsVectorSize;
}

@property (nonatomic, retain) NSData *audioResultMat;
@property (nonatomic) unsigned long long audioResultsNumVectors;
@property (nonatomic) unsigned long long audioResultsVectorSize;

- (void).cxx_destruct;
- (id)audioResultMat;
- (unsigned long long)audioResultsNumVectors;
- (unsigned long long)audioResultsVectorSize;
- (id)initWithAudioResultMat:(id)arg1 vectorSize:(unsigned long long)arg2 numVectors:(unsigned long long)arg3;
- (void)setAudioResultMat:(id)arg1;
- (void)setAudioResultsNumVectors:(unsigned long long)arg1;
- (void)setAudioResultsVectorSize:(unsigned long long)arg1;

@end
