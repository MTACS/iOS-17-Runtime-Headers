
@interface _CLVLLocalizationDebugInfo : NSObject <NSCopying, NSSecureCoding> {
    _CLVLLocalizationMaps488Details * _maps488Details;
}

@property (nonatomic, copy) _CLVLLocalizationMaps488Details *maps488Details;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithVLLocalizationDebugInfo:(id)arg1;
- (id)maps488Details;
- (void)setMaps488Details:(id)arg1;

@end
