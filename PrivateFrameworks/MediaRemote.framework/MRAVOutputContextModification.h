
@interface MRAVOutputContextModification : NSObject <NSSecureCoding> {
    NSArray * _avOutputDevices;
    NSArray * _concreteOutputDevices;
    NSString * _identifier;
    NSString * _initiator;
    unsigned long long  _modificationType;
    NSArray * _outputDevices;
    NSString * _password;
    bool  _shouldFadeAudio;
}

@property (nonatomic, readonly) NSArray *avOutputDevices;
@property (nonatomic, readonly) NSArray *concreteOutputDevices;
@property (nonatomic, copy) NSString *initiator;
@property (nonatomic, readonly) unsigned long long modificationType;
@property (nonatomic, readonly) NSArray *outputDeviceUIDs;
@property (nonatomic, readonly) NSArray *outputDevices;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) bool shouldFadeAudio;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)avOutputDevices;
- (id)concreteOutputDevices;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 devices:(id)arg2;
- (id)initiator;
- (unsigned long long)modificationType;
- (void)modifyWithOutputContext:(id)arg1 queue:(id)arg2 completion:(id /* block */)arg3;
- (id)outputDeviceUIDs;
- (id)outputDevices;
- (id)password;
- (void)setInitiator:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setShouldFadeAudio:(bool)arg1;
- (bool)shouldFadeAudio;

@end
