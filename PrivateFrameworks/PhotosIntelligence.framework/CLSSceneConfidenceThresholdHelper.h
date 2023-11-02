
@interface CLSSceneConfidenceThresholdHelper : NSObject {
    NSMutableDictionary * _confidenceThresholdBySceneIdentifierBySceneModelIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _confidenceThresholdBySceneIdentifierBySceneModelIdentifierLock;
    NSArray * _sceneNames;
    unsigned long long  _thresholdType;
    bool  _useEntityNet;
}

- (void).cxx_destruct;
- (void)_commonInitWithSceneNames:(id)arg1 thresholdType:(unsigned long long)arg2;
- (id)confidenceThresholdBySceneIdentifierWithCurationModel:(id)arg1;
- (id)initForEntityNetWithSceneNames:(id)arg1 thresholdType:(unsigned long long)arg2;
- (id)initWithSceneNames:(id)arg1 thresholdType:(unsigned long long)arg2;

@end
