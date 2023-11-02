
@interface GEOComposedStringArgument_Substitution : GEOComposedStringArgument {
    GEOComposedStringSubstitutionCandidate * _substituteToUse;
    NSMapTable * _substitutionCandidates;
    unsigned long long  _waypointIndex;
}

@property (nonatomic, readonly) unsigned long long waypointIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithGeoFormatArgument:(id)arg1;
- (id)_stringReplacementWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setSubstitutionForWaypointCategory:(int)arg1;
- (void)setSubstitutionForWaypointCategory:(int)arg1 handler:(id /* block */)arg2;
- (id)substitutionFormat;
- (unsigned long long)waypointIndex;

@end
