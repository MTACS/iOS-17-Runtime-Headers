
@interface FSTaskProgress : NSObject {
    FSTaskDescription * _initialDescription;
    NSXPCConnection * _ourConn;
    NSProgress * _progress;
}

@property (readonly, copy) FSTaskDescription *initialDescription;
@property (retain) NSXPCConnection *ourConn;
@property (readonly, retain) NSProgress *progress;

+ (void)constructFromListener:(id)arg1 description:(id)arg2 reply:(id /* block */)arg3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithProgress:(id)arg1 description:(id)arg2;
- (id)initialDescription;
- (id)ourConn;
- (id)progress;
- (void)setOurConn:(id)arg1;

@end
