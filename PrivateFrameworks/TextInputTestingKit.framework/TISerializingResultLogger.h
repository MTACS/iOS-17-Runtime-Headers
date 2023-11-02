
@interface TISerializingResultLogger : NSObject <TIAutocorrectionResultLogging> {
    unsigned long long  _flushThreshold;
    NSObject<OS_dispatch_queue> * _logSerializationQueue;
    NSMutableArray * _partfileArchivePathsMutable;
    NSObject<OS_dispatch_queue> * _partfileArchivePathsQueue;
    unsigned long long  _partfileCount;
    NSURL * _partfileURL;
    NSMutableArray * _resultsBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long flushThreshold;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *logSerializationQueue;
@property (nonatomic, readonly) NSArray *partfileArchivePaths;
@property (nonatomic, readonly) NSMutableArray *partfileArchivePathsMutable;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *partfileArchivePathsQueue;
@property (nonatomic, readonly) unsigned long long partfileCount;
@property (nonatomic, readonly) NSURL *partfileURL;
@property (nonatomic, readonly) NSMutableArray *resultsBuffer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addResult:(id)arg1;
- (id)allResults;
- (bool)bufferEmpty;
- (bool)bufferFull;
- (id)currentPartfileArchivePath;
- (void)flushBufferWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)flushThreshold;
- (id)initWithOutputURL:(id)arg1 flushThreshold:(id)arg2;
- (id)logSerializationQueue;
- (id)partfileArchivePaths;
- (id)partfileArchivePathsMutable;
- (id)partfileArchivePathsQueue;
- (unsigned long long)partfileCount;
- (id)partfileURL;
- (id)resultsBuffer;
- (void)serializeResultsArray:(id)arg1;

@end
