
@interface RTISupplementalItemIcon : NSObject <NSCopying, NSSecureCoding> {
    NSData * _data;
    NSString * _dataType;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSString *dataType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)dataType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataType:(id)arg1 data:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
