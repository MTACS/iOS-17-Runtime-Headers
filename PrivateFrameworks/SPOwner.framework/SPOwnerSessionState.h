
@interface SPOwnerSessionState : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _disabledReasons;
    NSString * _ownerDataState;
    NSString * _serviceState;
}

@property (nonatomic, retain) NSSet *disabledReasons;
@property (nonatomic, retain) NSString *ownerDataState;
@property (nonatomic, retain) NSString *serviceState;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)disabledReasons;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServiceState:(id)arg1 disabledReasons:(id)arg2 ownerDataState:(id)arg3;
- (id)ownerDataState;
- (id)serviceState;
- (void)setDisabledReasons:(id)arg1;
- (void)setOwnerDataState:(id)arg1;
- (void)setServiceState:(id)arg1;

@end
