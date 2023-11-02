
@interface __NSConcreteUUID : _NSUUIDBridge {
    void _storage;
}

@property (nonatomic, readonly) NSString *UUIDString;
@property (nonatomic, readonly) Class classForCoder;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

+ (bool)supportsSecureCoding;

- (id)UUIDString;
- (Class)classForCoder;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getUUIDBytes:(char *)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUIDBytes:(const char *)arg1;
- (id)initWithUUIDString:(id)arg1;

@end
