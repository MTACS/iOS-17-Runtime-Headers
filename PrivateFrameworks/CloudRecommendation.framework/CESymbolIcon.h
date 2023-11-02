
@interface CESymbolIcon : CEIcon {
    NSString * _identifier;
    NSString * _path;
    NSString * _systemColorName;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *path;
@property (nonatomic, copy) NSString *systemColorName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)path;
- (void)setIdentifier:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setSystemColorName:(id)arg1;
- (id)systemColorName;

@end
