
@interface CLSCityNatureModel : NSObject <CLSClassificationBasedSignalModel> {
    CLSSignalNode * _cityNatureishNode;
    CLSSignalNode * _cityNode;
    double  _cityscapeWallpaperSuggestionCityThreshold;
    CLSSignalNode * _natureNode;
    unsigned long long  _version;
}

@property (readonly) CLSSignalNode *cityNatureishNode;
@property (readonly) CLSSignalNode *cityNode;
@property (readonly) double cityscapeWallpaperSuggestionCityThreshold;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) CLSSignalNode *natureNode;
@property (readonly) Class superclass;
@property (readonly) unsigned long long version;

+ (unsigned long long)baseSceneAnalysisVersionWithSceneAnalysisVersion:(unsigned long long)arg1;
+ (void)enumerateModelsAscending:(bool)arg1 usingBlock:(id /* block */)arg2;
+ (unsigned long long)latestVersion;
+ (id)name;

- (void).cxx_destruct;
- (id)cityNatureishNode;
- (id)cityNode;
- (double)cityscapeWallpaperSuggestionCityThreshold;
- (id)initForTesting;
- (id)initWithSceneAnalysisVersion:(unsigned long long)arg1;
- (bool)isResponsibleForSignalIdentifier:(unsigned long long)arg1;
- (id)modelInfo;
- (id)natureNode;
- (id)nodeForSignalIdentifier:(unsigned long long)arg1;
- (void)processSignals:(id)arg1 intoProcessedSignals:(id)arg2;
- (void)setupVersion82;
- (void)setupVersion85;
- (unsigned long long)version;

@end
