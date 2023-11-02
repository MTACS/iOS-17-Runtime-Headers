
@interface PHASESharedRoot : PHASEObject {
    AVAudioSession * _session;
    struct UniqueObjectId { 
        unsigned long long mStorage[2]; 
    }  _sessionUUID;
}

@property (readonly) AVAudioSession *session;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEngine:(id)arg1;
- (id)initWithEngine:(id)arg1 entityType:(unsigned int)arg2 shapes:(id)arg3;
- (id)initWithEngine:(id)arg1 session:(id)arg2 sessionUUID:(id)arg3;
- (id)initWithEngine:(id)arg1 sessionUUID:(id)arg2;
- (id)session;
- (void)setTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

@end
