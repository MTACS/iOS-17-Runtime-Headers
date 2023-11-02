
@interface CSLPRFStingSettingsModelAction : NSObject <NSCopying, NSSecureCoding> {
    NSString * _actionIdentifier;
    NSString * _startActionIdentifier;
    NSString * _title;
}

@property (nonatomic, retain) NSString *actionIdentifier;
@property (nonatomic, retain) NSString *startActionIdentifier;
@property (nonatomic, retain) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)actionIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setActionIdentifier:(id)arg1;
- (void)setStartActionIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)startActionIdentifier;
- (id)title;

@end
