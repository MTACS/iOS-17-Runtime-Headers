
@interface DNDSModeAssertionStore : NSObject <DNDSBackingStoreRecord, NSCopying, NSMutableCopying> {
    NSArray * _assertions;
    NSArray * _invalidationRequests;
    NSArray * _invalidations;
}

@property (nonatomic, readonly, copy) NSArray *assertions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *invalidationRequests;
@property (nonatomic, readonly, copy) NSArray *invalidations;
@property (readonly) Class superclass;

+ (struct { struct { id x_1_1_1; id x_1_1_2; id x_1_1_3; } x1; struct { id x_2_1_1; id x_2_1_2; id x_2_1_3; id x_2_1_4; } x2; struct { id x_3_1_1; id x_3_1_2; id x_3_1_3; id x_3_1_4; id x_3_1_5; id x_3_1_6; } x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; id x_4_1_5; id x_4_1_6; id x_4_1_7; id x_4_1_8; id x_4_1_9; id x_4_1_10; id x_4_1_11; id x_4_1_12; } x4; struct { id x_5_1_1; id x_5_1_2; } x5; struct { id x_6_1_1; id x_6_1_2; id x_6_1_3; id x_6_1_4; id x_6_1_5; id x_6_1_6; } x6; struct { id x_7_1_1; } x7; struct { id x_8_1_1; id x_8_1_2; id x_8_1_3; id x_8_1_4; id x_8_1_5; id x_8_1_6; id x_8_1_7; } x8; struct { id x_9_1_1; id x_9_1_2; id x_9_1_3; id x_9_1_4; } x9; })backingRecordKeys;
+ (id)messageDateForPeaceSyncDictionaryRepresentation:(id)arg1;
+ (id)messageDateForSyncDictionaryRepresentation:(id)arg1;
+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;
+ (id)newWithPeaceSyncDictionaryRepresentation:(id)arg1;
+ (id)newWithSyncDictionaryRepresentation:(id)arg1;
+ (struct { struct { id x_1_1_1; id x_1_1_2; id x_1_1_3; } x1; struct { id x_2_1_1; id x_2_1_2; id x_2_1_3; id x_2_1_4; } x2; struct { id x_3_1_1; id x_3_1_2; id x_3_1_3; id x_3_1_4; id x_3_1_5; id x_3_1_6; } x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; id x_4_1_5; id x_4_1_6; id x_4_1_7; id x_4_1_8; id x_4_1_9; id x_4_1_10; id x_4_1_11; id x_4_1_12; } x4; struct { id x_5_1_1; id x_5_1_2; } x5; struct { id x_6_1_1; id x_6_1_2; id x_6_1_3; id x_6_1_4; id x_6_1_5; id x_6_1_6; } x6; struct { id x_7_1_1; } x7; struct { id x_8_1_1; id x_8_1_2; id x_8_1_3; id x_8_1_4; id x_8_1_5; id x_8_1_6; id x_8_1_7; } x8; struct { id x_9_1_1; id x_9_1_2; id x_9_1_3; id x_9_1_4; } x9; })syncMessageKeys;
+ (struct { struct { id x_1_1_1; id x_1_1_2; id x_1_1_3; } x1; struct { id x_2_1_1; id x_2_1_2; id x_2_1_3; id x_2_1_4; } x2; struct { id x_3_1_1; id x_3_1_2; id x_3_1_3; id x_3_1_4; id x_3_1_5; id x_3_1_6; } x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; id x_4_1_5; id x_4_1_6; id x_4_1_7; id x_4_1_8; id x_4_1_9; id x_4_1_10; id x_4_1_11; id x_4_1_12; } x4; struct { id x_5_1_1; id x_5_1_2; } x5; struct { id x_6_1_1; id x_6_1_2; id x_6_1_3; id x_6_1_4; id x_6_1_5; id x_6_1_6; } x6; struct { id x_7_1_1; } x7; struct { id x_8_1_1; id x_8_1_2; id x_8_1_3; id x_8_1_4; id x_8_1_5; id x_8_1_6; id x_8_1_7; } x8; struct { id x_9_1_1; id x_9_1_2; id x_9_1_3; id x_9_1_4; } x9; })sysdiagnoseRecordKeys;
+ (id)upgradeDictionaryRepresentation:(id)arg1 fromVersionNumber:(unsigned long long)arg2 toVersionNumber:(unsigned long long)arg3;

- (void).cxx_destruct;
- (id)_initWithStore:(id)arg1;
- (id)assertions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentationWithContext:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)invalidationRequests;
- (id)invalidations;
- (bool)isEqual:(id)arg1;
- (id)lastUpdateDate;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)peaceSyncDictionaryRepresentationWithDate:(id)arg1 messageUUID:(id)arg2 userRequestedClientIdentifierHandler:(id /* block */)arg3;
- (id)syncDictionaryRepresentationWithDate:(id)arg1 messageUUID:(id)arg2;
- (id)sysdiagnoseDictionaryRepresentation;

@end
