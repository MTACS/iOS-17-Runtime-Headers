
@interface EDAMUserProfile : FATObject {
    EDAMBusinessUserAttributes * _attributes;
    NSString * _email;
    NSNumber * _id;
    NSNumber * _joined;
    NSString * _name;
    NSNumber * _photoLastUpdated;
    NSString * _photoUrl;
    NSNumber * _role;
    NSString * _username;
}

@property (nonatomic, retain) EDAMBusinessUserAttributes *attributes;
@property (nonatomic, retain) NSString *email;
@property (nonatomic, retain) NSNumber *id;
@property (nonatomic, retain) NSNumber *joined;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSNumber *photoLastUpdated;
@property (nonatomic, retain) NSString *photoUrl;
@property (nonatomic, retain) NSNumber *role;
@property (nonatomic, retain) NSString *username;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)attributes;
- (id)email;
- (id)id;
- (id)joined;
- (id)name;
- (id)photoLastUpdated;
- (id)photoUrl;
- (id)role;
- (void)setAttributes:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setId:(id)arg1;
- (void)setJoined:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPhotoLastUpdated:(id)arg1;
- (void)setPhotoUrl:(id)arg1;
- (void)setRole:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)username;

@end
