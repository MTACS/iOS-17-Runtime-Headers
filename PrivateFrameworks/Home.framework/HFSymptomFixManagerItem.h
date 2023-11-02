
@interface HFSymptomFixManagerItem : NSObject {
    HMAccessory * _accessory;
    HMSymptomFixSession * _fixSession;
    NSUUID * _identifier;
    HMSymptom * _symptom;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) HMSymptomFixSession *fixSession;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) HMSymptom *symptom;

- (void).cxx_destruct;
- (id)accessory;
- (id)description;
- (id)fixSession;
- (id)identifier;
- (id)initWithSymptom:(id)arg1 fixSession:(id)arg2 accessory:(id)arg3;
- (id)symptom;

@end
