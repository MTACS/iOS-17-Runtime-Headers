
@interface ICQTipIconSymbol : ICQTipIcon {
    NSString * _id;
    NSString * _path;
    NSString * _systemColorName;
}

@property (nonatomic, retain) NSString *id;
@property (nonatomic, retain) NSString *path;
@property (nonatomic, retain) NSString *systemColorName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)id;
- (id)initWithCoder:(id)arg1;
- (id)path;
- (void)setId:(id)arg1;
- (void)setPath:(id)arg1;
- (void)setSystemColorName:(id)arg1;
- (id)systemColorName;

@end
