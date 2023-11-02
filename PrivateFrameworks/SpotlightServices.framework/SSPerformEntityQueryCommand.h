
@interface SSPerformEntityQueryCommand : SFPerformEntityQueryCommand {
    bool  _fromSuggestion;
}

@property (nonatomic) bool fromSuggestion;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)fromSuggestion;
- (id)initWithCoder:(id)arg1;
- (void)setFromSuggestion:(bool)arg1;

@end
