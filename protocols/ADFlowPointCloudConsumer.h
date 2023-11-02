
@protocol ADFlowPointCloudConsumer <NSObject>

@required

- (void)pushPointCloud:(void *)arg1 pose:(void *)arg2 calibration:(void *)arg3 timestamp:(void *)arg4; // needs 4 arg types, found 2: ADJasperPointCloud *, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }

@end
