
@interface INCustomObject : INObject {
    INCodable * _backingStore;
}

@property (setter=_setBackingStore:, nonatomic, retain) INCodable *_backingStore;
@property (nonatomic, readonly) INCodableDescription *codableDescription;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_backingStore;
- (id)_initWithCodableDescription:(id)arg1;
- (bool)_isValidKey:(id)arg1;
- (void)_setBackingStore:(id)arg1;
- (id)codableDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1 parameterName:(id)arg2 reference:(id)arg3;
- (id)initWithObject:(id)arg1 codableDescription:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AppPredictionFoundation.framework/AppPredictionFoundation

- (bool)atx_isFuzzyMatch:(id)arg1;

@end
