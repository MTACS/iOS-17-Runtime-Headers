
@interface PRRangingDevice : NSObject {
    NSDictionary * _clientInfo;
}

@property (readonly, copy) NSDictionary *clientInfo;

+ (bool)isSupported;

- (void).cxx_destruct;
- (id)clientInfo;
- (id)init;

@end
