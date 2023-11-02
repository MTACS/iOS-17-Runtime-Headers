
@interface HMDResidentUserModel : HMDUserModel {
    NSString * _displayName;
}

@property (nonatomic, retain) NSNumber *configState;
@property (nonatomic, retain) HMDDevice *device;
@property (nonatomic, retain) NSString *deviceIdentifier;
@property (nonatomic, retain) NSString *displayName;

+ (id)properties;

- (void).cxx_destruct;
- (id)displayName;
- (void)setDisplayName:(id)arg1;

@end
