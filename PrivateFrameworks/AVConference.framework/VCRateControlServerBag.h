
@interface VCRateControlServerBag : NSObject {
    bool  _experimentEnabled;
    NSNumber * _experimentGroupIndex;
    int  _operatingMode;
    NSDictionary * _serverBagDict;
}

@property (readonly, retain) NSNumber *experimentGroupIndex;
@property (readonly) int experimentVersion;
@property (readonly) NSDictionary *serverBagDictionary;

+ (id)groupKeysWithMode:(int)arg1 primaryKey:(id)arg2;
+ (id)keysWithMode:(int)arg1;
+ (id)prefixForMode:(int)arg1;
+ (id)profileNumberKeyWithMode:(int)arg1;

- (bool)containsAllSecondaryKeysWithPrimaryKey:(id)arg1;
- (void)dealloc;
- (id)experimentGroupIndex;
- (int)experimentVersion;
- (id)getExperimentConfig:(unsigned char)arg1 defaultValue:(id)arg2;
- (id)getExperimentValueForKey:(id)arg1;
- (id)initWithMode:(int)arg1 serverBagDict:(id)arg2;
- (id)serverBagDictionary;
- (id)valueForSecondaryKeyWithPrimaryKey:(id)arg1 secondaryKey:(id)arg2 type:(int)arg3;
- (id)valueForType:(int)arg1 value:(id)arg2;

@end
