
@interface HMMHomeLogEvent : HMMLogEvent {
    NSUUID * _homeUUID;
}

@property (nonatomic, readonly) NSUUID *homeUUID;
@property (nonatomic, readonly) NSString *homeUUIDString;

+ (id)alloc;

- (void).cxx_destruct;
- (id)homeUUID;
- (id)homeUUIDString;
- (id)initWithHomeUUID:(id)arg1;

@end
