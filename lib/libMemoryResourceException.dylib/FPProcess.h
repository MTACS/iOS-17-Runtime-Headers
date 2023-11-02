
@interface FPProcess : NSObject {
    NSString * _displayString;
    NSMutableArray * _errors;
    NSMutableArray * _globalErrors;
    bool  _hiddenFromDisplay;
    int  _idleExitStatus;
    bool  _is64bit;
    bool  _isTranslated;
    NSArray * _memoryRegions;
    NSString * _name;
    unsigned long long  _pageSize;
    int  _pid;
    FPSharedCache * _sharedCache;
    NSMutableArray * _warnings;
}

@property (nonatomic, readonly) NSDictionary *auxData;
@property (nonatomic, readonly) bool breakDownPhysFootprint;
@property (nonatomic, retain) NSString *displayString;
@property (nonatomic) bool hiddenFromDisplay;
@property (nonatomic, readonly) int idleExitStatus;
@property (nonatomic) bool is64bit;
@property (nonatomic) bool isTranslated;
@property (nonatomic, retain) NSArray *memoryRegions;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long pageSize;
@property (nonatomic) int pid;
@property (nonatomic, retain) FPSharedCache *sharedCache;

+ (id)_nameForBsdInfo:(struct proc_bsdinfo { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[32]; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; int x20; unsigned long long x21; unsigned long long x22; }*)arg1;
+ (id)allProcessesExcludingPids:(id)arg1;
+ (id)childPidsForPids:(id)arg1;
+ (id)pidsForStringDescriptions:(id)arg1 errors:(id*)arg2;
+ (id)processWithBsdInfo:(struct proc_bsdinfo { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[32]; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; int x20; unsigned long long x21; unsigned long long x22; }*)arg1;
+ (id)processWithPid:(int)arg1;
+ (id)removeIdleExitCleanProcessesFrom:(id)arg1;

- (void).cxx_destruct;
- (void)_addGlobalError:(id)arg1;
- (unsigned long long)_gatherPageSize;
- (bool)_isAlive;
- (bool)_populateTask;
- (id)asNumber;
- (id)auxData;
- (bool)breakDownPhysFootprint;
- (id)description;
- (id)displayString;
- (id)errors;
- (void)gatherData;
- (id)globalErrors;
- (unsigned long long)hash;
- (bool)hiddenFromDisplay;
- (int)idleExitStatus;
- (id)init;
- (id)initWithBsdInfo:(struct proc_bsdinfo { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; unsigned int x12; BOOL x13[16]; BOOL x14[32]; unsigned int x15; unsigned int x16; unsigned int x17; unsigned int x18; unsigned int x19; int x20; unsigned long long x21; unsigned long long x22; }*)arg1;
- (bool)is64bit;
- (bool)isEqual:(id)arg1;
- (bool)isTranslated;
- (id)memoryRegions;
- (id)name;
- (unsigned long long)pageSize;
- (int)pid;
- (void)setDisplayString:(id)arg1;
- (void)setHiddenFromDisplay:(bool)arg1;
- (void)setIs64bit:(bool)arg1;
- (void)setIsTranslated:(bool)arg1;
- (void)setMemoryRegions:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPageSize:(unsigned long long)arg1;
- (void)setPid:(int)arg1;
- (void)setSharedCache:(id)arg1;
- (id)sharedCache;
- (id)warnings;

@end
