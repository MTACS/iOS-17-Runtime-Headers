
@interface IMMessageDirectoryContents : NSObject {
    IMCombinedDirectoryContents * _allDirectoryContents;
    NSArray * _directoryContents;
    IMDirectoryContents * _messagesDirectoryContents;
    IMDirectoryContents * _metaDataDirectoryContents;
    bool  _needsGathering;
}

@property (nonatomic, readonly) IMCombinedDirectoryContents *allDirectoryContents;
@property (nonatomic, readonly) NSArray *directoryContents;
@property (nonatomic, readonly) IMDirectoryContents *messagesDirectoryContents;
@property (nonatomic, readonly) IMDirectoryContents *metaDataDirectoryContents;
@property (nonatomic) bool needsGathering;

- (void).cxx_destruct;
- (id)allDirectoryContents;
- (id)directoryContents;
- (void)gather;
- (bool)gatherIfNeeded;
- (id)init;
- (id)messagesDirectoryContents;
- (id)metaDataDirectoryContents;
- (bool)needsGathering;
- (void)setNeedsGathering:(bool)arg1;

@end
