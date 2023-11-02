
@interface DMFSetAppCellularSliceUUIDRequest : DMFAppRequest {
    NSString * _UUIDString;
}

@property (nonatomic, copy) NSString *UUIDString;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUIDString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setUUIDString:(id)arg1;

@end
