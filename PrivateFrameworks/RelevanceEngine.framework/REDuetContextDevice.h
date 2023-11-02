
@interface REDuetContextDevice : NSObject {
    unsigned long long  _deviceType;
    NSUUID * _identifier;
}

@property (nonatomic, readonly) unsigned long long deviceType;
@property (nonatomic, readonly) NSUUID *identifier;

+ (id)companionDevice;
+ (id)localDevice;

- (void).cxx_destruct;
- (unsigned long long)deviceType;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithUUID:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;

@end
