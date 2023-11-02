
@interface HMCharacteristicWriteRequest : HMCharacteristicRequest <HMWriteOperation> {
    <NSCopying><NSObject> * _value;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <NSCopying><NSObject> *value;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)writeRequestWithCharacteristic:(id)arg1 value:(id)arg2;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCharacteristic:(id)arg1 value:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)value;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
