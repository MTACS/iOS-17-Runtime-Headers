
@interface PIAdjustmentController : NSObject {
    NUAdjustment * _adjustment;
    NSMutableDictionary * _changes;
    NUIdentifier * _identifier;
}

@property (nonatomic, readonly) NUAdjustment *adjustment;
@property (nonatomic, readonly) bool canBeEnabled;
@property (nonatomic, readonly) NSArray *displayInputKeys;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic) bool enabled;
@property (nonatomic, retain) NUIdentifier *identifier;
@property (nonatomic, readonly) NSArray *inputKeys;
@property (nonatomic, readonly) NSDictionary *settings;

// Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging

+ (id)autoKey;
+ (id)enabledKey;

- (void).cxx_destruct;
- (bool)_isDefault;
- (id)_primitiveValueForKey:(id)arg1;
- (void)_setPrimitiveValue:(id)arg1 forKey:(id)arg2;
- (id)adjustment;
- (id)autoKeysForPaste;
- (bool)canBeEnabled;
- (bool)canHaveAuto;
- (id)debugDescription;
- (id)displayInputKeys;
- (id)displayName;
- (bool)enabled;
- (bool)hasAutoKeyInSchema;
- (bool)hasInputKey:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithAdjustment:(id)arg1;
- (id)inputKeys;
- (void)interpolateFromStart:(id)arg1 toEnd:(id)arg2 progress:(double)arg3;
- (bool)isAuto;
- (bool)isEqual:(id)arg1;
- (bool)isEqual:(id)arg1 forKeys:(id)arg2;
- (bool)isEqual:(id)arg1 visualChangesOnly:(bool)arg2;
- (bool)isEqualToAdjustmentController:(id)arg1;
- (bool)isSettingEqual:(id)arg1 forKey:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)pasteAdjustment:(id)arg1 forMediaType:(long long)arg2;
- (id)pasteKeysForMediaType:(long long)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setFromAdjustment:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setIsAuto:(bool)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)settingForKey:(id)arg1;
- (id)settings;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timeFromInputKey:(id)arg1 timescaleKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)valuesForArrayInputKey:(id)arg1;
- (id)visualInputKeys;

// Image: /System/Library/PrivateFrameworks/PhotosUIEdit.framework/PhotosUIEdit

- (id)analyticsPayload;

@end
