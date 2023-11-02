
@interface AAUploadBatchEventConfig : NSObject {
    void debuggingEnabled;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  directory;
    void maxByteSizePerSessionBatch;
    void maxEventsPerSessionBatch;
    void maxUploadTries;
    void transparencyLoggingEnabled;
}

@property (nonatomic, readonly) bool debuggingEnabled;
@property (nonatomic, readonly) NSURL *directory;
@property (nonatomic, readonly) long long maxByteSizePerSessionBatch;
@property (nonatomic, readonly) long long maxEventsPerSessionBatch;
@property (nonatomic, readonly) long long maxUploadTries;
@property (nonatomic, readonly) bool transparencyLoggingEnabled;

+ (id)default;

- (void).cxx_destruct;
- (bool)debuggingEnabled;
- (id)directory;
- (id)init;
- (id)initWithBatchSize:(long long)arg1 enableDebugging:(bool)arg2;
- (long long)maxByteSizePerSessionBatch;
- (long long)maxEventsPerSessionBatch;
- (long long)maxUploadTries;
- (bool)transparencyLoggingEnabled;
- (id)withDebuggingEnabled:(bool)arg1;
- (id)withDirectory:(id)arg1;
- (id)withMaxByteSizePerSessionBatch:(long long)arg1;
- (id)withMaxEventsPerSessionBatch:(long long)arg1;
- (id)withMaxUploadTries:(long long)arg1;
- (id)withTransparencyLoggingEnabled:(bool)arg1;

@end
