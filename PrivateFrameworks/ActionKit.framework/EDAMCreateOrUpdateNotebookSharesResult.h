
@interface EDAMCreateOrUpdateNotebookSharesResult : FATObject {
    NSArray * _matchingShares;
    NSNumber * _updateSequenceNum;
}

@property (nonatomic, retain) NSArray *matchingShares;
@property (nonatomic, retain) NSNumber *updateSequenceNum;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)matchingShares;
- (void)setMatchingShares:(id)arg1;
- (void)setUpdateSequenceNum:(id)arg1;
- (id)updateSequenceNum;

@end
