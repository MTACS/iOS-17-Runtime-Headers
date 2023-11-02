
@interface TPSWidgetContent : TPSContent {
    NSDictionary * _attributes;
    bool  _hasAssets;
    long long  _priority;
}

@property (nonatomic, copy) NSDictionary *attributes;
@property (nonatomic) bool hasAssets;
@property (nonatomic) long long priority;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributes;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAssets;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 metadata:(id)arg2;
- (long long)priority;
- (void)setAttributes:(id)arg1;
- (void)setHasAssets:(bool)arg1;
- (void)setPriority:(long long)arg1;
- (id)titleContent;

@end
