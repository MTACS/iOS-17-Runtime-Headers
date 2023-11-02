
@interface SYDocumentSender : NSObject <NSCopying, NSSecureCoding> {
    NSString * _handle;
    NSString * _name;
}

@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *preferredFormattedName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedNameWithStyle:(long long)arg1;
- (id)handle;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 handle:(id)arg2;
- (id)name;
- (id)personNameComponentsFormattedWithStyle:(long long)arg1;
- (id)preferredFormattedName;

@end
