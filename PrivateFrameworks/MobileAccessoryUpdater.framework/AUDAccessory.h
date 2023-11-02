
@interface AUDAccessory : NSObject <NSCopying, NSSecureCoding> {
    NSString * _fwVersion;
    NSString * _uid;
}

@property (nonatomic, retain) NSString *fwVersion;
@property (nonatomic, readonly, copy) NSString *uid;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)fwVersion;
- (id)initWithCoder:(id)arg1;
- (id)initWithUID:(id)arg1;
- (void)setFwVersion:(id)arg1;
- (id)uid;

@end
