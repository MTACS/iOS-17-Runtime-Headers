
@interface _MFEmailAddress : NSObject {
    NSString * _address;
    NSString * _displayName;
    NSString * _fullAddress;
}

@property (nonatomic, readonly, copy) NSString *address;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *fullAddress;

- (void).cxx_destruct;
- (id)address;
- (id)displayName;
- (id)fullAddress;
- (id)initWithAddress:(id)arg1;
- (id)initWithAddress:(id)arg1 displayName:(id)arg2;

@end
