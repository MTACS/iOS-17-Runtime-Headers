
@interface CTPhoneBookEntry : NSObject <NSCopying, NSSecureCoding> {
    NSString * _altNumber;
    NSString * _altText;
    NSString * _email;
    NSString * _group;
    bool  _isHidden;
    NSString * _name;
    NSString * _number;
}

@property (nonatomic, retain) NSString *altNumber;
@property (nonatomic, retain) NSString *altText;
@property (nonatomic, retain) NSString *email;
@property (nonatomic, retain) NSString *group;
@property (nonatomic) bool isHidden;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *number;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altNumber;
- (id)altText;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)email;
- (void)encodeWithCoder:(id)arg1;
- (id)group;
- (id)initWithCoder:(id)arg1;
- (bool)isHidden;
- (id)name;
- (id)number;
- (void)setAltNumber:(id)arg1;
- (void)setAltText:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setIsHidden:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNumber:(id)arg1;

@end
