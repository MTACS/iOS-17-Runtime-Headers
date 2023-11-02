
@interface _GCDevicePIDVIDMatchingFilter : NSObject <_GCDeviceMatchingFilter> {
    NSArray * _productIDs;
    NSNumber * _vendorID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithVendorID:(id)arg1 productIDs:(id)arg2;
- (bool)match:(id)arg1;

@end
