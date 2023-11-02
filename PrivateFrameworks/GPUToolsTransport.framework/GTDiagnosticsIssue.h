
@interface GTDiagnosticsIssue : NSObject <NSSecureCoding> {
    NSArray * _callstack;
    NSData * _cpuCallstackData;
    unsigned int  _cpuCallstackFramesNum;
    bool  _isDefaultLibrary;
    NSString * _libraryHash;
    NSData * _libraryOfflineSource;
    NSString * _libraryOnlineSource;
    NSURL * _metalFunctionFile;
    NSString * _metalFunctionName;
    NSString * _metalLogMessage;
}

@property (nonatomic, copy) NSArray *callstack;
@property (nonatomic, copy) NSData *cpuCallstackData;
@property (nonatomic) unsigned int cpuCallstackFramesNum;
@property (nonatomic) bool isDefaultLibrary;
@property (nonatomic, copy) NSString *libraryHash;
@property (nonatomic, copy) NSData *libraryOfflineSource;
@property (nonatomic, copy) NSString *libraryOnlineSource;
@property (nonatomic, copy) NSURL *metalFunctionFile;
@property (nonatomic, copy) NSString *metalFunctionName;
@property (nonatomic, copy) NSString *metalLogMessage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)callstack;
- (id)cpuCallstackData;
- (unsigned int)cpuCallstackFramesNum;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isDefaultLibrary;
- (id)libraryHash;
- (id)libraryOfflineSource;
- (id)libraryOnlineSource;
- (id)metalFunctionFile;
- (id)metalFunctionName;
- (id)metalLogMessage;
- (void)setCallstack:(id)arg1;
- (void)setCpuCallstackData:(id)arg1;
- (void)setCpuCallstackFramesNum:(unsigned int)arg1;
- (void)setIsDefaultLibrary:(bool)arg1;
- (void)setLibraryHash:(id)arg1;
- (void)setLibraryOfflineSource:(id)arg1;
- (void)setLibraryOnlineSource:(id)arg1;
- (void)setMetalFunctionFile:(id)arg1;
- (void)setMetalFunctionName:(id)arg1;
- (void)setMetalLogMessage:(id)arg1;

@end
