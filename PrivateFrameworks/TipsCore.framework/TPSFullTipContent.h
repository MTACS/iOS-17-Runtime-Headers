
@interface TPSFullTipContent : TPSActionableContent {
    NSArray * _footnoteContent;
}

@property (nonatomic, copy) NSArray *footnoteContent;

+ (id)na_identity;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)footnoteContent;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 metadata:(id)arg2;
- (void)setFootnoteContent:(id)arg1;

@end
