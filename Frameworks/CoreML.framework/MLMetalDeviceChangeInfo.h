
@interface MLMetalDeviceChangeInfo : NSObject {
    long long  _changeType;
    <MTLDevice> * _metalDevice;
}

@property (nonatomic, readonly) long long changeType;
@property (nonatomic, readonly) <MTLDevice> *metalDevice;

- (void).cxx_destruct;
- (long long)changeType;
- (id)initWithMetalDevice:(id)arg1 changeType:(long long)arg2;
- (id)metalDevice;

@end
