
@protocol HMDSettingTransaction <NSObject>

@required

- (void)addModel:(HMBModel *)arg1;
- (void)addSettingModel:(id <HMDSettingModelBaseProtocol>)arg1;
- (void)removeModelWithIdentifier:(NSUUID *)arg1;

@end
