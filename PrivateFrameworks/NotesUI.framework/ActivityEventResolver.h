
@interface ActivityEventResolver : NSObject {
    void context;
    void itemCache;
    void mentionsCache;
    void object;
    void objectCache;
    void objectDidUpdateShareObservation;
    void participantAvatarCache;
    void participantCache;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithObject:(id)arg1 error:(id*)arg2;

@end
