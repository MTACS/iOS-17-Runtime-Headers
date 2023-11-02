
@interface GEOComposedStringSubstitutionCandidate : NSObject <NSCopying, NSSecureCoding> {
    GEOComposedString * _composedString;
    GEOComposedStringOptions * _optionsToUse;
    int  _waypointCategory;
}

@property (nonatomic, readonly) GEOComposedString *composedString;
@property (nonatomic, readonly) int waypointCategory;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)composedString;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (int)waypointCategory;

@end
