
@interface HMBLocalZoneLocalInput : HMBLocalZoneInput {
    long long  _additionConstraint;
}

@property long long additionConstraint;

- (long long)additionConstraint;
- (id)commitWithOptions:(id)arg1 error:(id*)arg2;
- (void)setAdditionConstraint:(long long)arg1;
- (bool)stageAdditionForModel:(id)arg1 error:(id*)arg2;

@end
