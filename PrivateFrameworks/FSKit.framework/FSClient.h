
@interface FSClient : NSObject <FSClientHostXPC> {
    NSXPCConnection * _conn;
    bool  _connected;
    id /* block */  _taskHandler;
}

@property (retain) NSXPCConnection *conn;
@property (readonly) bool connected;
@property (copy) id /* block */ taskHandler;

+ (void)initialize;

- (void).cxx_destruct;
- (void)cancelTask:(id)arg1 reply:(id /* block */)arg2;
- (void)checkResource:(id)arg1 options:(id)arg2 connection:(id)arg3 reply:(id /* block */)arg4;
- (void)checkResource:(id)arg1 usingBundle:(id)arg2 options:(id)arg3 connection:(id)arg4 reply:(id /* block */)arg5;
- (id)conn;
- (bool)connected;
- (void)currentTasks:(id /* block */)arg1;
- (void)currentTasksSync:(id /* block */)arg1;
- (void)formatResource:(id)arg1 usingBundle:(id)arg2 options:(id)arg3 connection:(id)arg4 reply:(id /* block */)arg5;
- (void)getFSProgressForTask:(id)arg1 reply:(id /* block */)arg2;
- (void)handleInvalidated;
- (id)init;
- (void)installedExtensions:(id /* block */)arg1;
- (void)installedExtensionsSync:(id /* block */)arg1;
- (void)probeResource:(id)arg1 reply:(id /* block */)arg2;
- (void)probeResource:(id)arg1 usingBundle:(id)arg2 reply:(id /* block */)arg3;
- (void)probeResourceSync:(id)arg1 reply:(id /* block */)arg2;
- (void)probeResourceSync:(id)arg1 usingBundle:(id)arg2 reply:(id /* block */)arg3;
- (void)setConn:(id)arg1;
- (void)setTaskHandler:(id /* block */)arg1;
- (void)setTaskUpdateHandler:(id /* block */)arg1 reply:(id /* block */)arg2;
- (void)setupHandlers;
- (id /* block */)taskHandler;
- (void)taskStatusUpdate:(id)arg1;
- (void)validateVolumeName:(id)arg1 usingBundle:(id)arg2 volumeID:(id)arg3 reply:(id /* block */)arg4;

@end
