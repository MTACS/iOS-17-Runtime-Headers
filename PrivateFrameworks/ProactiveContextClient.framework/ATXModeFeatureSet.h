
@interface ATXModeFeatureSet : NSObject <NSSecureCoding> {
    NSMutableDictionary * _features;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_enumerateFeaturesUsingBlock:(id /* block */)arg1;
- (bool)boolValueForFeatureType:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)mergeWithFeatures:(id)arg1;
- (void)setNullForFeatureType:(int)arg1;
- (void)setString:(id)arg1 forFeatureType:(int)arg2;
- (void)setValue:(bool)arg1 forBinaryFeatureOfType:(int)arg2;
- (void)setValue:(id)arg1 forFeatureType:(int)arg2;
- (id)stringForFeatureType:(int)arg1;
- (id)valueForFeatureType:(int)arg1;

@end
