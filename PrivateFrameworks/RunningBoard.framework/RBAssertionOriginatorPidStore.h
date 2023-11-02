
@interface RBAssertionOriginatorPidStore : NSObject <RBAssertionOriginatorPidPersisting, RBStateCapturing> {
    struct { unsigned int x1; unsigned int x2; unsigned int x3; } * _header;
    int  _headerID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _path;
    int * _pids;
    int  _pidsID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *stateCaptureTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPid:(int)arg1;
- (id)captureState;
- (bool)containsPid:(int)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)initWithPath:(id)arg1;
- (bool)isValid;
- (void)removePid:(int)arg1;
- (void)setValidProcesses:(id)arg1;
- (id)stateCaptureTitle;

@end
