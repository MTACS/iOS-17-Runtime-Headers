
@interface VCVideoHardwareDumpWriter : NSObject {
    void * _dumpFile;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _registrationLock;
    struct __CFSet { } * _sources;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;

@end
