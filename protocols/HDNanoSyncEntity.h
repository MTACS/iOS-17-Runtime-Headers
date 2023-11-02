
@protocol HDNanoSyncEntity <HDSyncEntity>

@optional

+ (bool)companionDidChangeForProfile:(HDProfile *)arg1 error:(id*)arg2;
+ (int)nanoSyncObjectType;
+ (unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1;
+ (bool)supportsSpeculativeNanoSyncChanges;

@end
