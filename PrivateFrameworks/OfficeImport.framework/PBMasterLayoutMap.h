
@interface PBMasterLayoutMap : NSObject {
    NSMutableDictionary * mMasterIdToMasterInfoMap;
    NSMutableDictionary * mTitleIdToMasterIdMap;
}

+ (id)masterLayoutMap;

- (void).cxx_destruct;
- (id)allMasterIds;
- (id)init;
- (int)masterIdForTitleId:(int)arg1;
- (id)masterInfoForMasterId:(int)arg1;
- (id)masterInfoForSlideHolder:(id)arg1;
- (void)setMasterId:(int)arg1 forTitleId:(int)arg2;
- (void)setMasterInfo:(id)arg1 forMasterId:(int)arg2;
- (id)slideLayoutForSlideHolder:(id)arg1;

@end
