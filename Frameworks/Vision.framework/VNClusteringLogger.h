
@interface VNClusteringLogger : NSObject {
    NSString * _fileNameBase;
    bool  _logEnabled;
    NSURL * _logFileURL;
    NSURL * _logFolderURL;
}

@property (readonly) NSString *fileNameBase;
@property (readonly) bool logEnabled;
@property (readonly) NSURL *logFileURL;
@property (readonly) NSURL *logFolderURL;

+ (void)appendString:(id)arg1 toLogFile:(id)arg2;
+ (id)currentDateTime;
+ (bool)isLogEnabled;
+ (id)padStringWithSpaces:(id)arg1 toSize:(long long)arg2;

- (void).cxx_destruct;
- (id)fileNameBase;
- (id)initWithOptions:(id)arg1 logEnabled:(bool)arg2;
- (id)initWithOptions:(id)arg1 logEnabled:(bool)arg2 logFileNameBase:(id)arg3;
- (void)logClusterLookupMapL0:(const void*)arg1;
- (void)logClusterLookupMapL1:(const void*)arg1;
- (void)logClusterMap:(const void*)arg1 level:(id)arg2;
- (void)logClusterMapL0:(const void*)arg1;
- (void)logClusterMapL1:(const void*)arg1;
- (bool)logEnabled;
- (id)logFileURL;
- (id)logFolderURL;
- (void)logString:(id)arg1;
- (void)resetFileNameURLWithCurentDateTime;

@end
