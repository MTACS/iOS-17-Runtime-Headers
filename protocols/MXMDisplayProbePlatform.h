
@protocol MXMDisplayProbePlatform <NSObject>

@required

+ (NSArray *)_allDescriptors;

- (void)_start;
- (void)_stop;
- (<MXMDisplayProbePlatformDelegate> *)delegate;
- (id)initPrivateWithDescriptor:(MXMDisplayDescriptor *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)setDelegate:(id <MXMDisplayProbePlatformDelegate>)arg1;

@end
