
@interface HMHomeInvitation : NSObject <HFStateDumpBuildable, HMObjectMerge, NSSecureCoding> {
    _HMContext * _context;
    HMHome * _home;
    NSURL * _homeObjectURL;
    HMHomeInvitationData * _invitationData;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, retain) _HMContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly) NSURL *homeObjectURL;
@property (nonatomic, readonly, copy) NSUUID *identifier;
@property (nonatomic, retain) HMHomeInvitationData *invitationData;
@property (nonatomic, readonly) long long invitationState;
@property (nonatomic, readonly, copy) NSDate *startDate;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_updateInvitationState:(long long)arg1;
- (void)cancelInviteWithCompletionHandler:(id /* block */)arg1;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (unsigned long long)hash;
- (id)home;
- (id)homeObjectURL;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 invitationData:(id)arg2;
- (id)initWithInvitationData:(id)arg1 home:(id)arg2;
- (id)invitationData;
- (long long)invitationState;
- (bool)isEqual:(id)arg1;
- (bool)mergeFromNewObject:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setInvitationData:(id)arg1;
- (id)startDate;
- (id)uniqueIdentifier;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
