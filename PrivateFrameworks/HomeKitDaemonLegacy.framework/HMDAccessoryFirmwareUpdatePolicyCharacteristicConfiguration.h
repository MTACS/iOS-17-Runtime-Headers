
@interface HMDAccessoryFirmwareUpdatePolicyCharacteristicConfiguration : NSObject {
    NSString * _format;
    NSNumber * _settlingTime;
    NSString * _type;
    NSArray * _values;
}

@property (readonly) NSString *format;
@property (readonly) NSNumber *settlingTime;
@property (readonly) NSString *type;
@property (readonly) NSArray *values;

- (void).cxx_destruct;
- (id)format;
- (id)initWithType:(id)arg1 format:(id)arg2 values:(id)arg3 settlingTime:(id)arg4;
- (id)settlingTime;
- (id)type;
- (id)values;

@end
