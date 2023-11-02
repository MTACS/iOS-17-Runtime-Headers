
@interface SignpostClientDrawableInterval : SignpostAnimationSubInterval {
    NSString * _executablePath;
    int  _pid;
    NSString * _processName;
    unsigned int  _queueID;
    unsigned int  _surfaceID;
    unsigned long long  _threadID;
}

@property (nonatomic, readonly) NSString *executablePath;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) NSString *processName;
@property (nonatomic, readonly) unsigned int queueID;
@property (nonatomic, readonly) unsigned int surfaceID;
@property (nonatomic, readonly) unsigned long long threadID;

- (void).cxx_destruct;
- (id)executablePath;
- (id)initWithClientDrawableInterval:(id)arg1;
- (int)pid;
- (id)processName;
- (unsigned int)queueID;
- (unsigned int)surfaceID;
- (unsigned long long)threadID;

@end
