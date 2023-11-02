
@interface TUCollaborationInitiator : NSObject <NSCopying, NSSecureCoding> {
    NSString * _handle;
    NSPersonNameComponents * _nameComponents;
}

@property (nonatomic, readonly, copy) NSString *handle;
@property (nonatomic, readonly, copy) NSPersonNameComponents *nameComponents;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNameComponents:(id)arg1 handle:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)nameComponents;

@end
