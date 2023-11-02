
@interface CAMSemanticStyle : NSObject {
    long long  _presetType;
    double  _sceneBias;
    double  _warmthBias;
}

@property (getter=isCustomizable, nonatomic, readonly) bool customizable;
@property (getter=isCustomized, nonatomic, readonly) bool customized;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly) long long makerPreset;
@property (getter=isNeutral, nonatomic, readonly) bool neutral;
@property (nonatomic, readonly, copy) NSString *presetDisplayName;
@property (nonatomic, readonly) long long presetType;
@property (nonatomic, readonly) double sceneBias;
@property (nonatomic, readonly) double warmthBias;

+ (unsigned long long)_indexForPresetString:(id)arg1;
+ (id)defaultStyles;
+ (void)getSceneBias:(out double*)arg1 warmthBias:(out double*)arg2 forPresetType:(long long)arg3;
+ (bool)isCustomizablePresetType:(long long)arg1;
+ (id)persistenceStringForPresetType:(long long)arg1;
+ (id)styleWithDictionary:(id)arg1 support:(unsigned long long)arg2 error:(id*)arg3;

- (long long)_makerPresetWithSceneBias:(double)arg1 warmthBias:(double)arg2;
- (id)description;
- (id)dictionaryRepresentationForSupport:(unsigned long long)arg1;
- (id)displayName;
- (id)initWithPresetType:(long long)arg1;
- (id)initWithPresetType:(long long)arg1 sceneBias:(double)arg2 warmthBias:(double)arg3;
- (bool)isCustomizable;
- (bool)isCustomized;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSemanticStyle:(id)arg1;
- (bool)isNeutral;
- (long long)makerPreset;
- (id)presetDisplayName;
- (long long)presetType;
- (double)sceneBias;
- (double)warmthBias;

@end
