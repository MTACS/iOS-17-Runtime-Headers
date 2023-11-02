
@interface GDHome : NSObject {
    NSArray * _allUsers;
    HMHome * _inner;
}

@property (nonatomic, readonly, copy) NSArray *allUsers;
@property (nonatomic, readonly, copy) HMHome *hmHome;
@property (nonatomic, readonly, copy) CLLocation *location;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly, copy) NSArray *users;

- (void).cxx_destruct;
- (id)allUsers;
- (id)hmHome;
- (id)initWithHMHome:(id)arg1;
- (id)location;
- (id)name;
- (id)persons;
- (id)uniqueIdentifier;
- (id)users;

@end
