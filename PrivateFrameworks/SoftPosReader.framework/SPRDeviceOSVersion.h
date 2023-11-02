
@interface SPRDeviceOSVersion : NSObject {
    NSString * _buildNumber;
    NSString * _productVersion;
}

@property (nonatomic, readonly, copy) NSString *buildNumber;
@property (nonatomic, readonly, copy) NSString *productVersion;
@property (nonatomic, readonly, copy) NSString *shortVersion;

- (void).cxx_destruct;
- (id)buildNumber;
- (id)description;
- (id)initWithDERRepresentation:(id)arg1;
- (id)productVersion;
- (id)shortVersion;

@end
