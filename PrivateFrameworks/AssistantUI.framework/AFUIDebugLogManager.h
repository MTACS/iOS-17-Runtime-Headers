
@interface AFUIDebugLogManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
}

@property (getter=_baseLogDirectoryURL, nonatomic, readonly, copy) NSURL *baseLogDirectoryURL;
@property (getter=_queue, nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (getter=_siriLogDirectoryURL, nonatomic, readonly, copy) NSURL *siriLogDirectoryURL;

+ (int)executeSystemCommand:(id)arg1 stdoutTo:(id)arg2;

- (void).cxx_destruct;
- (id)_archiveLogDirectoryAtURL:(id)arg1 name:(id)arg2 error:(id*)arg3;
- (id)_baseLogDirectoryURL;
- (void)_captureFileAtURL:(id)arg1 completion:(id /* block */)arg2;
- (void)_captureLogsAtURL:(id)arg1 logName:(id)arg2 sinceTime:(double)arg3 completion:(id /* block */)arg4;
- (void)_captureLogsAtURL:(id)arg1 logName:(id)arg2 sinceTime:(double)arg3 pattern:(id)arg4 mimeType:(id)arg5 completion:(id /* block */)arg6;
- (id)_captureLogsInDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 withMimeType:(id)arg3 attemptCompression:(bool)arg4 limit:(long long)arg5 error:(id*)arg6;
- (id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 includingPropertiesForKeys:(id)arg3 error:(id*)arg4;
- (id)_contentsOfDirectoryAtURL:(id)arg1 matchingPattern:(id)arg2 sortedByDateWithResourceKey:(id)arg3 error:(id*)arg4;
- (id)_queue;
- (id)_siriCardLogDirectoryURL;
- (id)_siriLogDirectoryURL;
- (id)_uniqueTemporaryFileURL;
- (void)captureCardLogsSinceTime:(double)arg1 completion:(id /* block */)arg2;
- (void)capturePreviousConversationWithCompletion:(id /* block */)arg1;
- (void)captureSiriSpeechLogsWithCompletion:(id /* block */)arg1;
- (void)captureSiriTTSAudioWithCompletion:(id /* block */)arg1;
- (void)captureSiriVoiceTriggerLogsWithCompletion:(id /* block */)arg1;
- (void)captureViewHierarchyLogWithDefaultViewHierarchy:(id)arg1 completion:(id /* block */)arg2;
- (id)init;

@end
