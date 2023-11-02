
@interface ICLibraryAuthServiceClientTokenIdentifier : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _DSID;
    NSString * _deviceGUID;
}

@property (nonatomic, readonly, copy) NSNumber *DSID;
@property (nonatomic, readonly, copy) NSString *deviceGUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deviceGUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1;

@end
