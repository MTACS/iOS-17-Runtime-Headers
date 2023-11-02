
@interface SFTabEntity : NSObject {
    NSString * _address;
    NSString * _title;
    NSUUID * _uuid;
}

@property (nonatomic, readonly, copy) NSString *address;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly, copy) NSUUID *uuid;

- (void).cxx_destruct;
- (id)address;
- (id)initWithUUID:(id)arg1 title:(id)arg2 address:(id)arg3;
- (id)title;
- (id)uuid;

@end
