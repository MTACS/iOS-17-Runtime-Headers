
@interface CHSIntentReference : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding> {
    INIntent * _inMemoryIntent;
    NSData * _intentData;
    NSData * _partialConfigData;
    NSData * _partialSchemaData;
    long long  _stableHash;
}

@property (nonatomic, readonly) bool _isPartial;
@property (setter=_setPartialSchemaData:, nonatomic, retain) NSData *_partialSchemaData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) long long stableHash;
@property (readonly) Class superclass;

+ (id)_decodeFromOPACK:(id)arg1 error:(id*)arg2;
+ (id)_encodeToOPACK:(id)arg1 error:(id*)arg2;
+ (id)_schemaDataFromIntent:(id)arg1 error:(id*)arg2;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithIntentData:(id)arg1 stableHash:(long long)arg2;
- (id)_initWithIntentInMemoryOnly:(id)arg1;
- (id)_initWithPartialIntentData:(id)arg1 schemaData:(id)arg2 stableHash:(long long)arg3;
- (bool)_isPartial;
- (id)_partialSchemaData;
- (void)_setPartialSchemaData:(id)arg1;
- (id)_typedIntent;
- (void)appendDescriptionToFormatter:(id)arg1;
- (id)description;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1;
- (id)initWithIntent:(id)arg1 encodesSchema:(bool)arg2;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (long long)stableHash;

@end
