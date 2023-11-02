
@interface ABTachogramClassifier : NSObject <HKHRAFibBurdenTachogramClassifier> {
    struct unique_ptr<Tellurium::tellurium_classifier_t, std::default_delete<Tellurium::tellurium_classifier_t>> { 
        struct __compressed_pair<Tellurium::tellurium_classifier_t *, std::default_delete<Tellurium::tellurium_classifier_t>> { 
            struct tellurium_classifier_t {} *__value_; 
        } __ptr_; 
    }  _classifier;
}

// Image: /System/Library/PrivateFrameworks/AfibBurden.framework/AfibBurden

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)classifyTachogram:(id)arg1;
- (id)init;
- (void)logToFileForTacho:(const void*)arg1 withClassification:(id)arg2;

// Image: /System/Library/PrivateFrameworks/HeartHealthDaemon.framework/HeartHealthDaemon

- (id)classifyHeartbeatSeries:(id)arg1;

@end
