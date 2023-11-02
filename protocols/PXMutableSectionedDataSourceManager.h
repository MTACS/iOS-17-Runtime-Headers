
@protocol PXMutableSectionedDataSourceManager

@required

- (id)pauseChangeDeliveryWithTimeout:(double)arg1 identifier:(NSString *)arg2;
- (void)resumeChangeDeliveryAndBackgroundLoading:(id)arg1;

@end
