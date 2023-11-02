
@interface GDHomeUser : NSObject {
    HMUser * _inner;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSString *userID;

- (void).cxx_destruct;
- (id)initWithHMUser:(id)arg1;
- (bool)isAdministratorForHome:(id)arg1;
- (id)name;
- (id)uniqueIdentifier;
- (id)userID;

@end
