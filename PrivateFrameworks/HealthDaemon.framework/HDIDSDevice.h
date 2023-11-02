
@interface HDIDSDevice : NSObject <NSCopying> {
    NSString * _buildVersion;
    NSString * _destinationID;
    long long  _deviceType;
    NSString * _identifier;
    NSString * _name;
}

@property (nonatomic, readonly, copy) NSString *buildVersion;
@property (nonatomic, readonly, copy) NSString *destinationID;
@property (nonatomic, readonly) long long deviceType;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)buildVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinationID;
- (long long)deviceType;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIDSDevice:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 destinationID:(id)arg3 deviceType:(long long)arg4 buildVersion:(id)arg5;
- (bool)isEqual:(id)arg1;
- (id)name;

@end
