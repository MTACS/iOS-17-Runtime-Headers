
@interface ATIOBinding : NSObject <NSSecureCoding> {
    struct shared_ptr<const AT::IOBinding::Impl> { 
        struct Impl {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  mImpl;
}

@property (nonatomic, readonly) unsigned int deviceID;
@property (nonatomic, readonly, retain) NSString *deviceUID;
@property (nonatomic, readonly, retain) AVAudioSession *session;
@property (nonatomic, readonly) unsigned int sessionID;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (unsigned int)deviceID;
- (id)deviceUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAudioSession:(id)arg1;
- (id)initWithAudioSessionID:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceID:(unsigned int)arg1;
- (id)initWithDeviceUID:(id)arg1;
- (id)initWithImpl:(struct shared_ptr<const AT::IOBinding::Impl> { struct Impl {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (bool)isEqual:(id)arg1;
- (id)session;
- (unsigned int)sessionID;

@end
