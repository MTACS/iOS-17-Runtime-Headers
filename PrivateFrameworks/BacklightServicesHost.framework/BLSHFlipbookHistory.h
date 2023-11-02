
@interface BLSHFlipbookHistory : NSObject {
    unsigned long long  _frameLimit;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _lock_frames;
    NSMutableDictionary * _lock_framesDict;
    unsigned long long  _memoryLimit;
}

@property (nonatomic, readonly) NSArray *allFrames;
@property (nonatomic, readonly) unsigned long long memoryUsage;

- (void).cxx_destruct;
- (void)addRenderedFrameToHistory:(id)arg1;
- (id)allFrames;
- (id)frameWithUUID:(id)arg1;
- (id)initWithFrameLimit:(unsigned long long)arg1 memoryLimit:(unsigned long long)arg2;
- (unsigned long long)memoryUsage;

@end
