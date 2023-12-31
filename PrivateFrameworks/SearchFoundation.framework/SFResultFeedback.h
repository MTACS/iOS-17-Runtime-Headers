
@interface SFResultFeedback : SFFeedback <NSCopying> {
    SFSearchResult * _result;
}

@property (nonatomic, retain) SFSearchResult *result;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResult:(id)arg1;
- (id)result;
- (void)setResult:(id)arg1;

@end
