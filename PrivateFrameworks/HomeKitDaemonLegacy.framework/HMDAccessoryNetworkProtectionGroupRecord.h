
@interface HMDAccessoryNetworkProtectionGroupRecord : NSObject {
    bool  _active;
    HMDAccessoryNetworkProtectionGroup * _group;
    bool  _persisted;
}

@property (getter=isActive, nonatomic) bool active;
@property (readonly) HMDAccessoryNetworkProtectionGroup *group;
@property (getter=isPersisted, nonatomic) bool persisted;

+ (id)recordWithGroup:(id)arg1 active:(bool)arg2 persisted:(bool)arg3;

- (void).cxx_destruct;
- (id)group;
- (id)initWithGroup:(id)arg1 active:(bool)arg2 persisted:(bool)arg3;
- (bool)isActive;
- (bool)isPersisted;
- (void)setActive:(bool)arg1;
- (void)setPersisted:(bool)arg1;

@end
