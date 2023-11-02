
@interface WBSOnDeviceModelEndpointInfo : NSObject {
    NSString * _checksumString;
    NSURL * _endpointURL;
    unsigned long long  _sizeInBytes;
}

@property (nonatomic, readonly, copy) NSString *checksumString;
@property (nonatomic, readonly, copy) NSURL *endpointURL;
@property (nonatomic, readonly) unsigned long long sizeInBytes;

- (void).cxx_destruct;
- (id)checksumString;
- (id)endpointURL;
- (id)initWithEndpointURL:(id)arg1 sizeInBytes:(unsigned long long)arg2 checksumString:(id)arg3;
- (unsigned long long)sizeInBytes;

@end
