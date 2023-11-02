
@interface HMIPersonTracker : HMFObject <HMFLogging> {
    NSMutableArray * _previousPersons;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableArray *previousPersons;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)getBlobIDAtIndex:(unsigned long long)arg1;
- (id)init;
- (id)previousPersons;
- (void)trackNewPersons:(id)arg1 knownPersons:(id)arg2 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 timeStamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4;

@end
