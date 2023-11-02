
@interface ICTTTextEditGrouper : NSObject {
    NSMutableDictionary * _checkmarkReplicaIDForUserID;
    ICTTTextEditFilter * _filter;
    bool  _includesCheckmarkEdits;
    bool  _includesTableEdits;
    bool  _joinsTextGaps;
    bool  _joinsWhitespaceAndNewlineGaps;
    ICNote * _note;
    NSMutableDictionary * _trustsTimestampsFromReplicaID;
    NSMutableDictionary * _userIDForReplicaID;
}

@property (nonatomic, readonly) NSMutableDictionary *checkmarkReplicaIDForUserID;
@property (nonatomic, copy) ICTTTextEditFilter *filter;
@property (nonatomic) bool includesCheckmarkEdits;
@property (nonatomic) bool includesTableEdits;
@property (nonatomic) bool joinsTextGaps;
@property (nonatomic) bool joinsWhitespaceAndNewlineGaps;
@property (nonatomic, readonly) ICNote *note;
@property (nonatomic, readonly) NSMutableDictionary *trustsTimestampsFromReplicaID;
@property (nonatomic, readonly) NSMutableDictionary *userIDForReplicaID;

- (void).cxx_destruct;
- (id)checkmarkReplicaIDForUserID;
- (id)editGroupForEdits:(id)arg1 userID:(id)arg2 inAttributedString:(id)arg3;
- (id)editsByAddingAllowedAttachmentEditsToEdit:(id)arg1 inAttributedString:(id)arg2;
- (id)editsByAddingCheckmarkEditsToEdit:(id)arg1 inAttributedString:(id)arg2;
- (id)editsByAddingTableEditsToEdit:(id)arg1 inAttributedString:(id)arg2;
- (id)filter;
- (id)filteredEditForEdit:(id)arg1 inAttributedString:(id)arg2;
- (id)groupedEdits;
- (id)groupedEditsForEdits:(id)arg1 inAttributedString:(id)arg2;
- (bool)includesCheckmarkEdits;
- (bool)includesTableEdits;
- (id)initWithNote:(id)arg1;
- (bool)joinsTextGaps;
- (bool)joinsWhitespaceAndNewlineGaps;
- (id)latestTimestampForEdits:(id)arg1;
- (id)note;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForEdits:(id)arg1;
- (void)setFilter:(id)arg1;
- (void)setIncludesCheckmarkEdits:(bool)arg1;
- (void)setIncludesTableEdits:(bool)arg1;
- (void)setJoinsTextGaps:(bool)arg1;
- (void)setJoinsWhitespaceAndNewlineGaps:(bool)arg1;
- (id)trustsTimestampsFromReplicaID;
- (bool)trustsTimestampsFromReplicaID:(id)arg1;
- (id)userIDForReplicaID;
- (id)userIDForReplicaID:(id)arg1;

@end
