
@interface HMDPrimaryElectionFindPrimaryMeshOperation : HMFOperation <HMFLogging> {
    <HMDResidentDeviceManagerContext> * _context;
    HMFFuture * _messagesFuture;
    NSSet * _otherResidents;
    NSArray * _results;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *results;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithContext:(id)arg1 otherResidents:(id)arg2;
- (id)logIdentifier;
- (void)main;
- (id)results;

@end
