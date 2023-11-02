
@interface PLAssetCollectionGenerationResult : NSObject {
    bool  _frequentLocationsDidChange;
    NSSet * _insertedOrUpdatedMoments;
}

@property (nonatomic, readonly) bool frequentLocationsDidChange;
@property (nonatomic, readonly) NSSet *insertedOrUpdatedMoments;

- (void).cxx_destruct;
- (bool)frequentLocationsDidChange;
- (id)initWithInsertedOrUpdatedMoments:(id)arg1 frequentLocationsDidChange:(bool)arg2;
- (id)insertedOrUpdatedMoments;

@end
