
@interface PGMemoryFeatureSpecification : NSObject {
    bool  _combineFeatureNodes;
    PGGraphFeatureNodeCollection * _featureNodes;
    long long  _featureType;
    NSObject<OS_os_log> * _loggingConnection;
    NSSet * _typeSpecificIdentifiers;
}

@property (nonatomic, readonly) bool combineFeatureNodes;
@property (nonatomic, readonly) PGGraphFeatureNodeCollection *featureNodes;
@property (nonatomic, readonly) long long featureType;
@property (nonatomic, readonly) NSSet *typeSpecificIdentifiers;

- (void).cxx_destruct;
- (bool)combineFeatureNodes;
- (id)featureNodes;
- (id)featureNodesInGraph:(id)arg1;
- (long long)featureType;
- (id)initWithFeatureType:(long long)arg1 typeSpecificIdentifiers:(id)arg2 combineFeatureNodes:(bool)arg3 graph:(id)arg4 loggingConnection:(id)arg5;
- (id)typeSpecificIdentifiers;

@end
