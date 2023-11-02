
@interface PHImportException : NSObject {
    NSDate * _createDate;
    unsigned long long  _lineNumber;
    NSString * _path;
    NSString * _sourceCodeFile;
    long long  _type;
    NSError * _underlyingError;
}

@property (nonatomic, readonly) NSDate *createDate;
@property (nonatomic, readonly) unsigned long long lineNumber;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *sourceCodeFile;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSError *underlyingError;

+ (id)logForAllExceptions:(id)arg1;

- (void).cxx_destruct;
- (id)createDate;
- (id)description;
- (id)initWithType:(long long)arg1 path:(id)arg2 underlyingError:(id)arg3 file:(char *)arg4 line:(unsigned long long)arg5;
- (unsigned long long)lineNumber;
- (id)path;
- (id)sourceCodeFile;
- (long long)type;
- (id)underlyingError;

@end
