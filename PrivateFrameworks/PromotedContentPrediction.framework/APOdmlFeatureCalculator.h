
@interface APOdmlFeatureCalculator : NSObject {
    APOdmlAssetManager * _assetManager;
    unsigned long long  _assetManagerType;
    NSURL * _assetPath;
    NSDate * _creationTime;
    unsigned long long  _placementType;
    APOdmlXpcLifecycleHandler * _task;
    NSString * _version;
}

@property (nonatomic, retain) APOdmlAssetManager *assetManager;
@property (nonatomic, readonly) unsigned long long assetManagerType;
@property (nonatomic, retain) NSURL *assetPath;
@property (nonatomic, retain) NSDate *creationTime;
@property (nonatomic, readonly) unsigned long long placementType;
@property (nonatomic, retain) APOdmlXpcLifecycleHandler *task;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (id)_vectorKeyForType:(unsigned long long)arg1;
- (id)assetManager;
- (unsigned long long)assetManagerType;
- (id)assetPath;
- (id)createAndSaveVector:(unsigned long long)arg1;
- (id)createAndSaveVectorWithBuilder:(id)arg1 vectorType:(unsigned long long)arg2;
- (id)creationTime;
- (id)initWithActivity:(id)arg1 placementType:(unsigned long long)arg2 assetManagerType:(unsigned long long)arg3;
- (id)initWithPlacementType:(unsigned long long)arg1 assetManagerType:(unsigned long long)arg2;
- (unsigned long long)placementType;
- (void)setAssetManager:(id)arg1;
- (void)setAssetPath:(id)arg1;
- (void)setCreationTime:(id)arg1;
- (void)setTask:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)task;
- (id)version;

@end
