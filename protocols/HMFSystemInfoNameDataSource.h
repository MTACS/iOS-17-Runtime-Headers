
@protocol HMFSystemInfoNameDataSource <NSObject>

@required

- (<HMFSystemInfoNameDataSourceDelegate> *)delegate;
- (NSString *)name;
- (void)setDelegate:(id <HMFSystemInfoNameDataSourceDelegate>)arg1;

@end
