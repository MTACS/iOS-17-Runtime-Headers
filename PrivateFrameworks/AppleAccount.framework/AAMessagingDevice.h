
@interface AAMessagingDevice : NSObject {
    IDSDevice * _device;
    NSString * _modelIdentifier;
    NSString * _productBuildVersion;
}

@property (nonatomic, readonly) NSString *modelIdentifier;
@property (nonatomic, readonly) NSString *productBuildVersion;

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1;
- (id)modelIdentifier;
- (id)productBuildVersion;

@end
