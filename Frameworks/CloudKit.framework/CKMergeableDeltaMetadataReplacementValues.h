
@interface CKMergeableDeltaMetadataReplacementValues : NSObject {
    NSSet * _removableDeltaMetadatas;
    NSDictionary * _replacementDeltaMetadatas;
    CKMergeableDeltaMetadata * _updatedNextDeltaMetadata;
}

@property (nonatomic, retain) NSSet *removableDeltaMetadatas;
@property (nonatomic, retain) NSDictionary *replacementDeltaMetadatas;
@property (nonatomic, retain) CKMergeableDeltaMetadata *updatedNextDeltaMetadata;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)removableDeltaMetadatas;
- (id)replacementDeltaMetadatas;
- (void)setRemovableDeltaMetadatas:(id)arg1;
- (void)setReplacementDeltaMetadatas:(id)arg1;
- (void)setUpdatedNextDeltaMetadata:(id)arg1;
- (id)updatedNextDeltaMetadata;

@end
