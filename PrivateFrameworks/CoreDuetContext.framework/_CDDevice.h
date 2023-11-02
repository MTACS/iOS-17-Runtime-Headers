
@interface _CDDevice : NSObject <NSCopying, NSSecureCoding> {
    bool  _companion;
    long long  _deviceClass;
    NSString * _deviceID;
    unsigned long long  _identifier;
    NSString * _model;
    NSString * _name;
}

@property (getter=isCompanion, nonatomic, readonly) bool companion;
@property (nonatomic) long long deviceClass;
@property (nonatomic, retain) NSString *deviceID;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, copy) NSString *name;

+ (unsigned long long)identifierForDeviceID:(id)arg1;
+ (id)localDevice;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)deviceClass;
- (id)deviceID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 deviceID:(id)arg2 deviceClass:(long long)arg3 model:(id)arg4 companion:(bool)arg5;
- (id)initWithName:(id)arg1 deviceID:(id)arg2 model:(id)arg3 companion:(bool)arg4;
- (id)initWithName:(id)arg1 identifier:(unsigned long long)arg2 deviceClass:(long long)arg3;
- (bool)isCompanion;
- (bool)isEqual:(id)arg1;
- (bool)matchesDeviceTypes:(unsigned long long)arg1;
- (id)model;
- (id)name;
- (void)setDeviceClass:(long long)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setName:(id)arg1;

@end
