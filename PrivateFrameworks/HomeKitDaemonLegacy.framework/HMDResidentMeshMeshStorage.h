
@interface HMDResidentMeshMeshStorage : HMFObject {
    NSMutableDictionary * _accessoryListWithLinkQuality;
    NSMutableSet * _accessoryUUIDs;
    bool  _enabled;
    unsigned long long  _generationCount;
    NSDictionary * _metrics;
    unsigned long long  _nestedStatusRequests;
    HMDResidentMesh * _owner;
    HMDResidentDevice * _residentDevice;
}

@property (nonatomic, retain) NSMutableDictionary *accessoryListWithLinkQuality;
@property (nonatomic, retain) NSMutableSet *accessoryUUIDs;
@property (nonatomic) bool enabled;
@property (nonatomic) unsigned long long generationCount;
@property (nonatomic, copy) NSDictionary *metrics;
@property (nonatomic) unsigned long long nestedStatusRequests;
@property (nonatomic) HMDResidentMesh *owner;
@property (nonatomic, readonly) HMDResidentDevice *residentDevice;

- (void).cxx_destruct;
- (void)_requestStatus;
- (id)accessoryListWithLinkQuality;
- (id)accessoryUUIDs;
- (bool)enabled;
- (unsigned long long)generationCount;
- (id)initWithResidentDevice:(id)arg1 owner:(id)arg2;
- (id)metrics;
- (unsigned long long)nestedStatusRequests;
- (id)owner;
- (id)residentDevice;
- (void)setAccessoryListWithLinkQuality:(id)arg1;
- (void)setAccessoryUUIDs:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGenerationCount:(unsigned long long)arg1;
- (void)setMetrics:(id)arg1;
- (void)setNestedStatusRequests:(unsigned long long)arg1;
- (void)setOwner:(id)arg1;

@end
