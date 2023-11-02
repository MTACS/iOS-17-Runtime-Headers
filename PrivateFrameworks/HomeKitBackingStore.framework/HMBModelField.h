
@interface HMBModelField : HMFObject <NSCopying, NSMutableCopying> {
    Class  _classObj;
    bool  _conformsToHMBModelNativeCKWrapper;
    id /* block */  _decodeBlock;
    id  _defaultValue;
    id /* block */  _descriptionBlock;
    id /* block */  _encodeBlock;
    bool  _encrypted;
    bool  _excludeFromCloudStorage;
    NSString * _externalRecordField;
    unsigned long long  _loggingVisibility;
    bool  _optional;
    HMFVersion * _readonlyVersion;
    HMFVersion * _unavailableVersion;
}

@property (nonatomic, readonly) Class classObj;
@property (nonatomic) bool conformsToHMBModelNativeCKWrapper;
@property (nonatomic, copy) id /* block */ decodeBlock;
@property (nonatomic, retain) id defaultValue;
@property (nonatomic, copy) id /* block */ descriptionBlock;
@property (nonatomic, copy) id /* block */ encodeBlock;
@property (nonatomic) bool encrypted;
@property (nonatomic) bool excludeFromCloudStorage;
@property (nonatomic, retain) NSString *externalRecordField;
@property (nonatomic) unsigned long long loggingVisibility;
@property (getter=isOptional, nonatomic) bool optional;
@property (nonatomic, copy) HMFVersion *readonlyVersion;
@property (nonatomic, copy) HMFVersion *unavailableVersion;

+ (id)deprecatedField;
+ (id)fieldWithClass:(Class)arg1;
+ (id)fieldWithClass:(Class)arg1 options:(id)arg2;
+ (id)optionalFieldWithClass:(Class)arg1;
+ (id)optionalFieldWithClass:(Class)arg1 options:(id)arg2;

- (void).cxx_destruct;
- (Class)classObj;
- (bool)conformsToHMBModelNativeCKWrapper;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id /* block */)decodeBlock;
- (id)decodeQueryableValue:(id)arg1;
- (id)defaultValue;
- (id)description;
- (id /* block */)descriptionBlock;
- (id)descriptionForEncodedQueryableValue:(id)arg1;
- (id /* block */)encodeBlock;
- (id)encodeQueryableValue:(id)arg1;
- (bool)encrypted;
- (bool)excludeFromCloudStorage;
- (id)externalRecordField;
- (id)initWithClass:(Class)arg1;
- (id)initWithClass:(Class)arg1 options:(id)arg2;
- (bool)isOptional;
- (unsigned long long)loggingVisibility;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)readonlyVersion;
- (void)setConformsToHMBModelNativeCKWrapper:(bool)arg1;
- (void)setDecodeBlock:(id /* block */)arg1;
- (void)setDefaultValue:(id)arg1;
- (void)setDescriptionBlock:(id /* block */)arg1;
- (void)setEncodeBlock:(id /* block */)arg1;
- (void)setEncrypted:(bool)arg1;
- (void)setExcludeFromCloudStorage:(bool)arg1;
- (void)setExternalRecordField:(id)arg1;
- (void)setLoggingVisibility:(unsigned long long)arg1;
- (void)setOptional:(bool)arg1;
- (void)setReadonlyVersion:(id)arg1;
- (void)setUnavailableVersion:(id)arg1;
- (id)unavailableVersion;

@end
