
@interface SBHStackConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsExternalSuggestions;
    bool  _allowsSuggestions;
    NSArray * _dataSources;
    unsigned long long  _sizeClass;
}

@property (nonatomic) bool allowsExternalSuggestions;
@property (nonatomic) bool allowsSuggestions;
@property (nonatomic, copy) NSArray *dataSources;
@property (nonatomic) unsigned long long sizeClass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsExternalSuggestions;
- (bool)allowsSuggestions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataSources;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAllowsExternalSuggestions:(bool)arg1;
- (void)setAllowsSuggestions:(bool)arg1;
- (void)setDataSources:(id)arg1;
- (void)setSizeClass:(unsigned long long)arg1;
- (unsigned long long)sizeClass;

@end
