
@interface PKPassAuxiliaryPassInformation : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSArray * _items;
    NSString * _title;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSArray *items;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithInformation:(id)arg1 bundle:(id)arg2 privateBundle:(id)arg3 passType:(unsigned long long)arg4;
- (id)items;
- (void)setIdentifier:(id)arg1;
- (void)setItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
