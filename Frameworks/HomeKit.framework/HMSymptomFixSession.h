
@interface HMSymptomFixSession : NSObject <HMFLogging, HMFTimerDelegate> {
    _HMContext * _context;
    <HMSymptomFixSessionDelegate> * _delegate;
    NSUUID * _deviceIdentifier;
    unsigned int  _deviceRepairFlags;
    SFDeviceRepairSession * _deviceRepairSession;
    bool  _deviceRepairSessionFinished;
    NSError * _error;
    bool  _hasSymptomDisappeared;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _logIdentifier;
    UIViewController * _presentingViewController;
    long long  _state;
    HMSymptom * _symptom;
    HMFTimer * _symptomDisappearanceTimer;
}

@property (nonatomic, readonly) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HMSymptomFixSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSUUID *deviceIdentifier;
@property (nonatomic) unsigned int deviceRepairFlags;
@property (nonatomic, retain) SFDeviceRepairSession *deviceRepairSession;
@property (getter=isDeviceRepairSessionFinished, nonatomic) bool deviceRepairSessionFinished;
@property (nonatomic, retain) NSError *error;
@property (nonatomic) bool hasSymptomDisappeared;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *logIdentifier;
@property (nonatomic, retain) UIViewController *presentingViewController;
@property (nonatomic) long long state;
@property (readonly) Class superclass;
@property (nonatomic, readonly) HMSymptom *symptom;
@property (nonatomic, retain) HMFTimer *symptomDisappearanceTimer;

+ (id)_createDeviceRepairSession;
+ (id)_createSymptomDisappearanceTimer;
+ (id)logCategory;

- (void).cxx_destruct;
- (void)_startSymptomDisappearanceTimer;
- (void)_updateForDeviceSetupProgressEvent:(unsigned int)arg1 error:(id)arg2;
- (void)_updateState;
- (id)context;
- (void)dealloc;
- (id)delegate;
- (id)deviceIdentifier;
- (unsigned int)deviceRepairFlags;
- (id)deviceRepairSession;
- (id)error;
- (bool)hasSymptomDisappeared;
- (id)init;
- (id)initWithSymptom:(id)arg1 deviceIdentifier:(id)arg2 context:(id)arg3;
- (bool)isDeviceRepairSessionFinished;
- (id)logIdentifier;
- (void)noteSymptomDisappeared;
- (id)presentingViewController;
- (void)setDelegate:(id)arg1;
- (void)setDeviceRepairFlags:(unsigned int)arg1;
- (void)setDeviceRepairSession:(id)arg1;
- (void)setDeviceRepairSessionFinished:(bool)arg1;
- (void)setError:(id)arg1;
- (void)setHasSymptomDisappeared:(bool)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSymptomDisappearanceTimer:(id)arg1;
- (void)start;
- (long long)state;
- (void)stop;
- (id)symptom;
- (id)symptomDisappearanceTimer;
- (void)timerDidFire:(id)arg1;

@end
