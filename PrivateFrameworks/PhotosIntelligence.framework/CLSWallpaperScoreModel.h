
@interface CLSWallpaperScoreModel : NSObject <CLSSignalModel> {
    CLSSignalNode * _catNode;
    CLSSignalNode * _cityscapeNode;
    CLSSignalNode * _dogNode;
    CLSSignalNode * _landscapeNode;
    CLSSignalNode * _minimumWallpaperScoreNode;
    CLSSignalNode * _peopleNode;
    CLSSignalNode * _petNode;
    unsigned long long  _version;
}

@property (readonly) CLSSignalNode *catNode;
@property (readonly) CLSSignalNode *cityscapeNode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CLSSignalNode *dogNode;
@property (readonly) unsigned long long hash;
@property (readonly) CLSSignalNode *landscapeNode;
@property (readonly) CLSSignalNode *minimumWallpaperScoreNode;
@property (readonly) CLSSignalNode *peopleNode;
@property (readonly) CLSSignalNode *petNode;
@property (readonly) Class superclass;
@property (readonly) unsigned long long version;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)arg1;
+ (unsigned long long)latestVersion;
+ (id)name;

- (void).cxx_destruct;
- (id)catNode;
- (id)cityscapeNode;
- (id)dogNode;
- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)arg1;
- (id)landscapeNode;
- (id)minimumWallpaperScoreNode;
- (id)peopleNode;
- (id)petNode;
- (void)setupVersion77;
- (void)setupVersion88;
- (unsigned long long)version;

@end
