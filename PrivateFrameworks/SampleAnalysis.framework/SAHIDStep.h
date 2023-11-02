
@interface SAHIDStep : NSObject {
    unsigned int  _debugid;
    int  _pid;
    unsigned long long  _tid;
    SATimestamp * _timestamp;
}

@property (readonly) unsigned int debugid;
@property (readonly) NSString *debugidString;
@property (readonly) int pid;
@property (readonly) unsigned long long tid;
@property (readonly) SATimestamp *timestamp;

- (void).cxx_destruct;
- (id)debugDescription;
- (unsigned int)debugid;
- (id)debugidString;
- (int)pid;
- (unsigned long long)tid;
- (id)timestamp;

@end
