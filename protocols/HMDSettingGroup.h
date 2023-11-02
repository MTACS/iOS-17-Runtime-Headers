
@protocol HMDSettingGroup <HMDSettingBaseProtocol>

@required

- (NSArray *)groups;
- (NSString *)keyPath;
- (NSArray *)settings;

@end
