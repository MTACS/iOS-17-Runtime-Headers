
@interface HFIncrementalStateIconDescriptor : NSObject <HFIconDescriptor> {
    NSString * _identifier;
    NSNumber * _incrementalState;
    bool  _shouldForceLTR;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSNumber *incrementalState;
@property (nonatomic, readonly) bool shouldForceLTR;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (unsigned long long)hash;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)arg1;
- (id)identifier;
- (id)incrementalState;
- (id)initWithIdentifier:(id)arg1 incrementalState:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)shouldForceLTR;

@end
