
@interface PersonalizationPortraitInternals.Consumer : NSObject {
    void entityDissector;
    void entityStoreOverride;
    void locationStoreOverride;
    void topicDissector;
    void topicStoreOverride;
    void writebackDissector;
}

- (void).cxx_destruct;
- (id)init;

@end
