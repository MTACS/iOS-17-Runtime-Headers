
@interface HMDSiriAccessoryInfo : NSObject {
    bool  _supportsDragonSiri;
    id  _targetsAccessory;
}

@property (nonatomic) bool supportsDragonSiri;
@property (nonatomic) id targetsAccessory;

+ (id)infoWithTargetableAccessory:(id)arg1;

- (void).cxx_destruct;
- (bool)isActiveAndSupportsDragonSiri;
- (void)setSupportsDragonSiri:(bool)arg1;
- (void)setTargetsAccessory:(id)arg1;
- (bool)supportsDragonSiri;
- (id)targetsAccessory;

@end
