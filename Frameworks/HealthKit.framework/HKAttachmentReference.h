
@interface HKAttachmentReference : NSObject <NSCopying, NSSecureCoding> {
    HKAttachment * _attachment;
    NSDate * _creationDate;
    NSUUID * _identifier;
    NSDictionary * _metadata;
    NSString * _objectIdentifier;
}

@property (readonly, copy) HKAttachment *attachment;
@property (readonly, copy) NSDate *creationDate;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) NSDictionary *metadata;
@property (readonly, copy) NSString *objectIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 objectIdentifier:(id)arg2 attachment:(id)arg3 creationDate:(id)arg4 metadata:(id)arg5;
- (id)attachment;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)metadata;
- (id)objectIdentifier;

@end
