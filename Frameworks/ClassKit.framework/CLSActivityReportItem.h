
@interface CLSActivityReportItem : CLSReportItem <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    NSString * _title;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
