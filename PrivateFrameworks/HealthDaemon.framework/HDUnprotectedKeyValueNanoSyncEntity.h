
@interface HDUnprotectedKeyValueNanoSyncEntity : HDKeyValueSyncEntity <HDNanoSyncEntity>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)category;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (bool)supportsSpeculativeNanoSyncChanges;
+ (bool)supportsSyncStore:(id)arg1;
+ (id)syncEntityIdentifier;

@end
