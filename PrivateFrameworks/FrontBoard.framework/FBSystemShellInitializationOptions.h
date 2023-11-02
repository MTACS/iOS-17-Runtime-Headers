
@interface FBSystemShellInitializationOptions : NSObject <NSCopying, NSMutableCopying> {
    NSString * _independentWatchdogPortName;
    bool  _initializeDisplayManager;
    bool  _initializeReadyForInteraction;
    id /* block */  _registerServicesBlock;
    bool  _resetDarkBootState;
    bool  _shouldWaitForMigrator;
    double  _systemSleepInterval;
}

@property (nonatomic, readonly, copy) NSString *independentWatchdogPortName;
@property (nonatomic, readonly) bool initializeDisplayManager;
@property (nonatomic, readonly) bool initializeReadyForInteraction;
@property (nonatomic, readonly, copy) id /* block */ registerAdditionalServicesBlock;
@property (nonatomic, readonly) bool resetDarkBootState;
@property (nonatomic, readonly) bool shouldWaitForMigrator;
@property (nonatomic, readonly) double systemSleepInterval;

- (void).cxx_destruct;
- (id)_initWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)independentWatchdogPortName;
- (id)init;
- (bool)initializeDisplayManager;
- (bool)initializeReadyForInteraction;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)registerAdditionalServicesBlock;
- (bool)resetDarkBootState;
- (bool)shouldWaitForMigrator;
- (double)systemSleepInterval;

@end
