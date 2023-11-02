
@interface EARAudioReader : NSObject {
    NSURL * _fileURL;
    double  _sampleRate;
}

- (void).cxx_destruct;
- (id)_avf_enumerateAudioBuffersWithBlock:(id /* block */)arg1;
- (id)_opx_enumerateAudioBuffersWithBlock:(id /* block */)arg1;
- (id)_opx_enumeratePacketsWithBlock:(id /* block */)arg1;
- (id)enumerateAudioBuffersWithBlock:(id /* block */)arg1;
- (id)initWithFileURL:(id)arg1 sampleRate:(unsigned long long)arg2;

@end
