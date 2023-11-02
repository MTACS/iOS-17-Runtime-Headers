
@interface AXCodeItem : NSObject {
    AXCodeItem * _associatedAccessibilityCodeItem;
    NSBundle * _cachedBundle;
    NSArray * _excludedProcesses;
    struct { 
        unsigned int isDyldOpened : 1; 
    }  _flags;
    unsigned short  _loadOrder;
    unsigned long long  _loadedAtTimestamp;
    NSString * _name;
    NSString * _path;
    NSMutableDictionary * _platformToTarget;
    AXCodeItem * _targetCodeItem;
    long long  _targetType;
    long long  _type;
}

@property (nonatomic) AXCodeItem *associatedAccessibilityCodeItem;
@property (nonatomic, readonly) NSBundle *cachedBundle;
@property (nonatomic, readonly) NSString *debugCodeTypeDescription;
@property (nonatomic, retain) NSArray *excludedProcesses;
@property (nonatomic, readonly) bool isAccessibilityBundle;
@property (nonatomic) bool isLoaded;
@property (nonatomic) unsigned short loadOrder;
@property (nonatomic, readonly) unsigned long long loadedAtTimestamp;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSMutableDictionary *platformToTarget;
@property (nonatomic) AXCodeItem *targetCodeItem;
@property (nonatomic) long long targetType;
@property (nonatomic) long long type;

+ (id)_codeItemQueue;
+ (long long)codeItemTypeFromString:(id)arg1;

- (void).cxx_destruct;
- (void)_cacheLazyProperties;
- (bool)_isSystemAppAccessibilityBundle;
- (void)addPlatformToTargetEntries:(id)arg1;
- (id)associatedAccessibilityCodeItem;
- (id)cachedBundle;
- (id)debugCodeTypeDescription;
- (id)description;
- (id)excludedProcesses;
- (unsigned long long)hash;
- (id)initAccessibilityCodeItemWithPath:(id)arg1 targetType:(long long)arg2 platformToTarget:(id)arg3 loadOrder:(unsigned short)arg4;
- (id)initWithPath:(id)arg1 isDyldOpened:(bool)arg2;
- (bool)isAccessibilityBundle;
- (bool)isEqual:(id)arg1;
- (bool)isLoaded;
- (unsigned short)loadOrder;
- (void)loadWithStrategy:(long long)arg1 onQueue:(id)arg2 completion:(id /* block */)arg3;
- (unsigned long long)loadedAtTimestamp;
- (id)name;
- (id)path;
- (id)platformToTarget;
- (id)prepareBackingBundleIfNeeded:(id*)arg1;
- (void)setAssociatedAccessibilityCodeItem:(id)arg1;
- (void)setExcludedProcesses:(id)arg1;
- (void)setIsLoaded:(bool)arg1;
- (void)setLoadOrder:(unsigned short)arg1;
- (void)setName:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setPlatformToTarget:(id)arg1;
- (void)setTargetCodeItem:(id)arg1;
- (void)setTargetType:(long long)arg1;
- (void)setType:(long long)arg1;
- (id)targetCodeItem;
- (long long)targetType;
- (long long)type;

@end
