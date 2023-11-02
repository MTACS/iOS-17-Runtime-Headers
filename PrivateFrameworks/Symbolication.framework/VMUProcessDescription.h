
@interface VMUProcessDescription : NSObject {
    NSDictionary * _binaryImageHints;
    bool  _binaryImagePostProcessingComplete;
    NSMutableArray * _binaryImages;
    NSDictionary * _buildVersionDictionary;
    int  _cpuType;
    NSDate * _date;
    NSMutableDictionary * _environment;
    unsigned long long  _executableLoadAddress;
    NSString * _executablePath;
    bool  _executablePathNeedsCorrection;
    NSString * _hardwareModel;
    unsigned int  _idleExitStatus;
    bool  _is64Bit;
    NSDictionary * _lsApplicationInformation;
    VMUTaskMemoryCache * _memoryCache;
    NSDictionary * _osVersionDictionary;
    NSString * _parentExecutablePath;
    NSString * _parentProcessName;
    unsigned long long  _physicalFootprint;
    unsigned long long  _physicalFootprintPeak;
    int  _pid;
    unsigned int  _platform;
    int  _ppid;
    struct timeval { 
        long long tv_sec; 
        int tv_usec; 
    }  _proc_starttime;
    NSString * _processName;
    bool  _processNameNeedsCorrection;
    NSArray * _sortedBinaryImages;
    struct _CSTypeRef { 
        unsigned long long _opaque_1; 
        unsigned long long _opaque_2; 
    }  _symbolicator;
    bool  _taskIsCorpseOrCore;
    bool  _taskIsTranslated;
    NSArray * _unreadableBinaryImagePaths;
}

@property (nonatomic, readonly) unsigned int idleExitStatus;
@property (nonatomic, readonly) unsigned long long physicalFootprint;
@property (nonatomic, readonly) unsigned long long physicalFootprintPeak;

+ (id)parseBinaryImagesDescription:(id)arg1;
+ (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })symbolicatorFromBinaryImagesDescription:(id)arg1;
+ (struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })symbolicatorFromBinaryImagesDescription:(id)arg1 withArchitecture:(struct _CSArchitecture { int x1; int x2; })arg2;

- (void).cxx_destruct;
- (id)_binaryImagesDescriptionForRanges:(id)arg1;
- (id)_buildInfoDescription;
- (id)_buildVersionDictionary;
- (id)_bundleLock;
- (id)_cpuTypeDescription;
- (void)_libraryLoaded:(struct _CSTypeRef { unsigned long long x1; unsigned long long x2; })arg1;
- (id)_osVersionDictionary;
- (id)_rangesOfBinaryImages:(id)arg1 forBacktraces:(id)arg2;
- (id)_sanitizeVersion:(id)arg1;
- (id)_systemVersionDescription;
- (id)binaryImageDictionaryForAddress:(unsigned long long)arg1;
- (id)binaryImages;
- (id)binaryImagesDescription;
- (id)binaryImagesDescriptionForBacktraces:(id)arg1;
- (id)bundleIdentifier;
- (void)cleansePathsIncludingBinaryImageList:(bool)arg1;
- (void)clearCrashReporterInfo;
- (int)cpuType;
- (id)date;
- (id)dateAndVersionDescription;
- (void)dealloc;
- (id)description;
- (id)displayName;
- (id)executablePath;
- (unsigned int)idleExitStatus;
- (bool)initFromCorpseOrCore;
- (void)initFromLiveProcess;
- (id)initWithPid:(int)arg1 orTask:(unsigned int)arg2;
- (id)initWithTask:(unsigned int)arg1 getBinariesList:(bool)arg2;
- (id)initWithVMUTaskMemoryCache:(id)arg1 getBinariesList:(bool)arg2;
- (bool)is64Bit;
- (bool)isAppleApplication;
- (bool)isTranslated;
- (int)parentPid;
- (id)parentProcessName;
- (id)parentProcessPath;
- (unsigned long long)physicalFootprint;
- (unsigned long long)physicalFootprintPeak;
- (int)pid;
- (id)processDescriptionHeader;
- (id)processIdentifier;
- (id)processName;
- (id)processStatisticsDescription;
- (id)processVersion;
- (id)processVersionDictionary;
- (void)setCrashReporterInfo;
- (unsigned int)task;
- (id)valueForEnvVar:(id)arg1;

@end
