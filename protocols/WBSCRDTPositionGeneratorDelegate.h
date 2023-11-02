
@protocol WBSCRDTPositionGeneratorDelegate <NSObject>

@required

- (NSString *)deviceIdentifierForPositionGenerator:(WBSCRDTPositionGenerator *)arg1;
- (long long)nextChangeIDForPositionInPositionGenerator:(WBSCRDTPositionGenerator *)arg1;
- (WBSCRDTPosition *)positionGenerator:(WBSCRDTPositionGenerator *)arg1 positionForRecordName:(NSString *)arg2;
- (NSString *)positionGenerator:(WBSCRDTPositionGenerator *)arg1 recordNameOfBookmarksAfterRecordWithName:(NSString *)arg2;
- (NSString *)positionGenerator:(WBSCRDTPositionGenerator *)arg1 recordNameOfBookmarksBeforeRecordWithName:(NSString *)arg2;

@end
