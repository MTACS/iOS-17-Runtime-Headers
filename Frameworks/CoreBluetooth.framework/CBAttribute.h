
@interface CBAttribute : NSObject {
    CBUUID * _UUID;
}

@property (nonatomic, readonly) CBUUID *UUID;

- (void).cxx_destruct;
- (id)UUID;
- (id)initWithUUID:(id)arg1;

@end
