
@interface SIRINLUReferenceContext : NSObject <NSSecureCoding> {
    bool  _contextualReference;
    bool  _disambiguationNeeded;
}

@property (nonatomic) bool contextualReference;
@property (nonatomic) bool disambiguationNeeded;

+ (bool)supportsSecureCoding;

- (bool)contextualReference;
- (id)description;
- (bool)disambiguationNeeded;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextualReference:(bool)arg1 DisambiguationNeeded:(bool)arg2;
- (void)setContextualReference:(bool)arg1;
- (void)setDisambiguationNeeded:(bool)arg1;

@end
