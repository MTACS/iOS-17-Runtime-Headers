
@interface DRSLog : NSObject {
    NSString * _path;
    unsigned long long  _size;
    bool  _transferOwnership;
}

@property (nonatomic, readonly) bool isAvailableOnDisk;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic, readonly) bool transferOwnership;

+ (Class)_moClass;
+ (id)entityName;

- (void).cxx_destruct;
- (void)_configureLogMO:(id)arg1;
- (bool)_deleteOnDiskLog;
- (bool)_getSizeFromPath;
- (id)_initWithLogMO_ON_MOC_QUEUE:(id)arg1;
- (id)_initWithLogPath:(id)arg1 transferOwnership:(bool)arg2;
- (id)_initWithLogPath:(id)arg1 transferOwnership:(bool)arg2 size:(unsigned long long)arg3;
- (id)debugDescription;
- (id)fileDescription;
- (bool)isAvailableOnDisk;
- (bool)isEqual:(id)arg1;
- (id)name;
- (id)path;
- (unsigned long long)size;
- (bool)transferOwnership;

@end
