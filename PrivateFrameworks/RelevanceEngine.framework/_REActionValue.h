
@interface _REActionValue : NSObject {
    REDonatedAction * _action;
    NSMutableSet * _mutableUUIDs;
}

@property (nonatomic, readonly) REDonatedAction *action;
@property (nonatomic, readonly) NSSet *uuids;

- (void).cxx_destruct;
- (id)action;
- (void)addAction:(id)arg1;
- (id)initWithAction:(id)arg1;
- (void)removeActionWithUUID:(id)arg1;
- (id)uuids;

@end
