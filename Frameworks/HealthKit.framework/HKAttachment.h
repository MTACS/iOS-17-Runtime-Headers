
@interface HKAttachment : NSObject <NSCopying, NSSecureCoding> {
    UTType * _contentType;
    NSDate * _creationDate;
    NSUUID * _identifier;
    NSDictionary * _metadata;
    NSString * _name;
    long long  _size;
}

@property (readonly, copy) UTType *contentType;
@property (readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSDictionary *metadata;
@property (readonly, copy) NSString *name;
@property (readonly) long long size;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 typeIdentifier:(id)arg3 size:(long long)arg4 creationDate:(id)arg5 metadata:(id)arg6;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)name;
- (long long)size;

@end
