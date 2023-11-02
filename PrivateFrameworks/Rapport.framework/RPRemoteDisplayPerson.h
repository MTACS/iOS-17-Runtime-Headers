
@interface RPRemoteDisplayPerson : NSObject <NSSecureCoding> {
    NSString * _accountID;
    NSString * _contactID;
    NSMutableArray * _discoveredDevices;
    unsigned int  _flags;
}

@property (nonatomic, readonly) NSString *accountID;
@property (nonatomic, readonly) NSString *contactID;
@property (nonatomic, readonly) NSMutableArray *discoveredDevices;
@property (nonatomic, readonly) unsigned int flags;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accountID;
- (void)addDevice:(id)arg1;
- (id)contactID;
- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (id)discoveredDevices;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)flags;
- (id)initPersonWithDevice:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)removeDevice:(id)arg1;

@end
