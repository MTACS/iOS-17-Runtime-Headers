
@interface HDIDSInvitation : NSObject {
    NSUUID * _UUID;
    id  _codableObject;
    NSString * _fromID;
}

@property (nonatomic, readonly, copy) NSUUID *UUID;
@property (nonatomic, readonly, copy) id codableObject;
@property (nonatomic, readonly, copy) NSString *fromID;

- (void).cxx_destruct;
- (id)UUID;
- (id)codableObject;
- (id)fromID;
- (id)initWithUUID:(id)arg1 fromID:(id)arg2 codableObject:(id)arg3;

@end
