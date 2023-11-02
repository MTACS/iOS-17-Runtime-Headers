
@interface TPSDiscoverabilityTip : TPSTip {
    NSAttributedString * _attributedString;
    bool  _localContent;
    NSDictionary * _preconditions;
}

@property (nonatomic, retain) NSAttributedString *attributedString;
@property (getter=isLocalContent, nonatomic) bool localContent;
@property (nonatomic, copy) NSDictionary *preconditions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isLocalContent;
- (id)preconditions;
- (void)setAttributedString:(id)arg1;
- (void)setLocalContent:(bool)arg1;
- (void)setPreconditions:(id)arg1;

@end
