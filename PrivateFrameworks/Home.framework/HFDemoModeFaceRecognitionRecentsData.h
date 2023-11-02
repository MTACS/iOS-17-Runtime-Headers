
@interface HFDemoModeFaceRecognitionRecentsData : NSObject {
    HMFaceCrop * _faceCrop;
    HMPerson * _person;
    NSUUID * _uuid;
}

@property (nonatomic, retain) HMFaceCrop *faceCrop;
@property (nonatomic, retain) HMPerson *person;
@property (nonatomic, retain) NSUUID *uuid;

- (void).cxx_destruct;
- (id)faceCrop;
- (id)initWithPerson:(id)arg1 faceCrop:(id)arg2;
- (id)person;
- (void)setFaceCrop:(id)arg1;
- (void)setPerson:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
