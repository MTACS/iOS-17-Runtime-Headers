
@interface CRKASMCourseUpdateProperties : NSObject <NSCopying> {
    NSNumber * _color;
    NSNumber * _mascot;
    NSString * _name;
    NSSet * _trustedUsersToAdd;
    NSSet * _trustedUsersToRemove;
    NSSet * _usersToAdd;
    NSSet * _usersToRemove;
}

@property (nonatomic, retain) NSNumber *color;
@property (nonatomic, retain) NSNumber *mascot;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSSet *trustedUsersToAdd;
@property (nonatomic, copy) NSSet *trustedUsersToRemove;
@property (nonatomic, copy) NSSet *usersToAdd;
@property (nonatomic, copy) NSSet *usersToRemove;

- (void).cxx_destruct;
- (bool)areFulfilledByCourse:(id)arg1;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mascot;
- (id)name;
- (void)setColor:(id)arg1;
- (void)setMascot:(id)arg1;
- (void)setName:(id)arg1;
- (void)setTrustedUsersToAdd:(id)arg1;
- (void)setTrustedUsersToRemove:(id)arg1;
- (void)setUsersToAdd:(id)arg1;
- (void)setUsersToRemove:(id)arg1;
- (id)trustedUsersToAdd;
- (id)trustedUsersToRemove;
- (id)usersToAdd;
- (id)usersToRemove;

@end
