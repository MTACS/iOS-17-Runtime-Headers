
@interface PFAnalyticsEvent : NSObject {
    void name;
    void payloadGenerator;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) id /* block */ payloadGenerator;

+ (id)downloadedFileHasiPodLibraryURLWithDiscoveryPoint:(id)arg1 path:(id)arg2 source:(id)arg3;
+ (id)drmKeyRecoveredWithGenerator:(id /* block */)arg1;
+ (id)drmKeyRecoveredWithPayload:(id)arg1;
+ (id)globalRetentionPolicy;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 generator:(id /* block */)arg2;
- (id)initWithName:(id)arg1 payload:(id)arg2;
- (id)name;
- (id /* block */)payloadGenerator;
- (void)setPayloadGenerator:(id /* block */)arg1;

@end
