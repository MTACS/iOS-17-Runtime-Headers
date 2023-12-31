
@interface _UILibArchiveAppleDoublePathSet : NSObject {
    NSMutableSet * _confirmAppleDoublePaths;
    NSMutableSet * _pathsWithDotUnderscorePrefixedFilenames;
}

+ (bool)isPossibleAppleDoubleByApplyingMatchingHeuristicToItem:(id)arg1;

- (void).cxx_destruct;
- (void)confirmExactAppleDoubleFilesAppearingAfterRealFilesByPrescanningArchivePath:(id)arg1;
- (void)confirmExactAppleDoubleFilesForItem:(id)arg1;
- (id)init;
- (bool)isConfirmedExactAppleDoubleItem:(id)arg1;
- (id)pathToRealFileIfConfirmedAppleDoubleItem:(id)arg1;

@end
