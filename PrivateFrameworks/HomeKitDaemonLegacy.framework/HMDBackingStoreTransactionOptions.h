
@interface HMDBackingStoreTransactionOptions : HMFObject <HMFLogging, NSSecureCoding> {
    unsigned long long  _destination;
    NSString * _label;
    bool  _mustPush;
    bool  _mustReplay;
    bool  _mustSaveArchiveAtomically;
    unsigned long long  _source;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long destination;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, readonly) bool mustPush;
@property (nonatomic, readonly) bool mustReplay;
@property (nonatomic, readonly) bool mustSaveArchiveAtomically;
@property (nonatomic, readonly) unsigned long long source;
@property (readonly) Class superclass;

+ (id)cloudRequiresPushOptions;
+ (id)defaultCloudOptions;
+ (id)defaultIDSOptions;
+ (id)defaultLegacyCloudOptions;
+ (id)defaultLocalOptions;
+ (id)defaultMetadataCloudOptions;
+ (id)defaultOutOfSyncOptions;
+ (id)defaultPreferencesOptions;
+ (id)defaultResidenceOptions;
+ (id)defaultXPCOptions;
+ (id)localPushBackOptions;
+ (id)logCategory;
+ (id)optionsWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 label:(id)arg3 mustReplay:(bool)arg4 mustPush:(bool)arg5 mustSaveArchiveAtomically:(bool)arg6;
+ (id)optionsWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 mustReplay:(bool)arg3 mustPush:(bool)arg4;
+ (id)optionsWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 mustReplay:(bool)arg3 mustPush:(bool)arg4 mustSaveArchiveAtomically:(bool)arg5;
+ (id)stringForHMDBackingStoreDestination:(unsigned long long)arg1;
+ (id)stringForHMDBackingStoreTransactionSource:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_description;
- (id)debugString:(bool)arg1;
- (id)description;
- (unsigned long long)destination;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2;
- (id)initWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 label:(id)arg3 mustReplay:(bool)arg4 mustPush:(bool)arg5;
- (id)initWithSource:(unsigned long long)arg1 destination:(unsigned long long)arg2 label:(id)arg3 mustReplay:(bool)arg4 mustPush:(bool)arg5 mustSaveArchiveAtomically:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)logIdentifier;
- (bool)mustPush;
- (bool)mustReplay;
- (bool)mustSaveArchiveAtomically;
- (void)setLabel:(id)arg1;
- (unsigned long long)source;

@end
