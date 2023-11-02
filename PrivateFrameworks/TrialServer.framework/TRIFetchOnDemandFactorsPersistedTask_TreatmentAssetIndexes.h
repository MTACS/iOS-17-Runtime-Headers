
@interface TRIFetchOnDemandFactorsPersistedTask_TreatmentAssetIndexes : TRIPBMessage

@property (nonatomic) bool hasTreatmentId;
@property (nonatomic, retain) TRIPBUInt32Array *indexArray;
@property (nonatomic, readonly) unsigned long long indexArray_Count;
@property (nonatomic, copy) NSString *treatmentId;

+ (id)descriptor;

@end
