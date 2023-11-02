
@interface GDHomePerson : NSObject {
    NSString * _name;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSUUID *uuid;

- (void).cxx_destruct;
- (id)initWithHMPerson:(id)arg1;
- (id)name;
- (id)uuid;

@end
