
@interface PXSharedLibraryLegacyDevice : NSObject {
    NSData * _iconData;
    NSString * _name;
    long long  _operatingSystem;
    bool  _upgradeable;
}

@property (nonatomic, readonly) NSData *iconData;
@property (nonatomic, readonly) NSString *instructions;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long operatingSystem;
@property (nonatomic, readonly) bool upgradeable;

- (void).cxx_destruct;
- (id)description;
- (id)iconData;
- (id)init;
- (id)initWithName:(id)arg1 iconData:(id)arg2 operatingSystem:(long long)arg3 upgradeable:(bool)arg4;
- (id)instructions;
- (id)name;
- (long long)operatingSystem;
- (bool)upgradeable;

@end
