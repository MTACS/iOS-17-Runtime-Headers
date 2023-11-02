
@interface ASDDSPGraphBox : NSObject {
    void * _box;
    struct shared_ptr<DSPGraph::Graph> { 
        struct Graph {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _graph;
}

@property (nonatomic, readonly) void*box;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long numInputs;
@property (nonatomic, readonly) long long numOutputs;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void*)box;
- (bool)getParameter:(float*)arg1 forID:(unsigned int)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4;
- (bool)getParameterInfo:(struct AudioUnitParameterInfo { BOOL x1[52]; struct __CFString {} *x2; unsigned int x3; struct __CFString {} *x4; unsigned int x5; float x6; float x7; float x8; unsigned int x9; }*)arg1 forID:(unsigned int)arg2 inScope:(unsigned int)arg3;
- (bool)getParameterList:(unsigned int*)arg1 numParameterIDs:(long long*)arg2 inScope:(unsigned int)arg3;
- (bool)hasParameter:(unsigned int)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (id)init;
- (id)initWithBox:(void*)arg1 fromGraph:(struct shared_ptr<DSPGraph::Graph> { struct Graph {} *x1; struct __shared_weak_count {} *x2; })arg2;
- (id)name;
- (long long)numInputs;
- (long long)numOutputs;
- (bool)setParameter:(float)arg1 forID:(unsigned int)arg2 scope:(unsigned int)arg3 element:(unsigned int)arg4 bufferOffset:(long long)arg5;
- (bool)startInjectingPort:(long long)arg1 toFile:(id)arg2 shouldLoop:(bool)arg3;
- (bool)startRecordingPort:(long long)arg1 toFile:(id)arg2;
- (bool)startRecordingPort:(long long)arg1 toFile:(id)arg2 withAudioCapturerOptions:(unsigned long long)arg3;
- (bool)stopInjectingPort:(long long)arg1;
- (bool)stopRecordingPort:(long long)arg1;

@end
