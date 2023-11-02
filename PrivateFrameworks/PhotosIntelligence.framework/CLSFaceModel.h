
@interface CLSFaceModel : NSObject <CLSSignalModel> {
    CLSSignalNode * _distanceNode;
    CLSSignalNode * _qualityNode;
    unsigned long long  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CLSSignalNode *distanceNode;
@property (readonly) unsigned long long hash;
@property (readonly) CLSSignalNode *qualityNode;
@property (readonly) Class superclass;
@property (readonly) unsigned long long version;

+ (unsigned long long)baseFaceAnalysisVersionWithFaceAnalysisVersion:(unsigned long long)arg1;
+ (unsigned long long)latestVersion;
+ (id)name;

- (void).cxx_destruct;
- (id)distanceNode;
- (id)initForTesting;
- (id)initWithFaceAnalysisVersion:(unsigned long long)arg1;
- (id)qualityNode;
- (void)setupVersion1;
- (void)setupVersion12;
- (unsigned long long)version;

@end
