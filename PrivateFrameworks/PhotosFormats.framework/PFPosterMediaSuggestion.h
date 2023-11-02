
@interface PFPosterMediaSuggestion : PFPosterMedia <NSCopying, NSSecureCoding> {
    unsigned short  _suggestionSubtype;
    NSString * _suggestionUUID;
}

@property (nonatomic) unsigned short suggestionSubtype;
@property (nonatomic, retain) NSString *suggestionUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAssetUUID:(id)arg1 suggestionUUID:(id)arg2 suggestionSubtype:(unsigned short)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSuggestionSubtype:(unsigned short)arg1;
- (void)setSuggestionUUID:(id)arg1;
- (unsigned short)suggestionSubtype;
- (id)suggestionUUID;

@end
