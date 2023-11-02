
@interface ICNANoteInlineAttachmentReport : NSObject {
    unsigned long long  _countOfDistinctFolderLinks;
    unsigned long long  _countOfDistinctMentions;
    unsigned long long  _countOfDistinctNoteLinks;
    unsigned long long  _countOfDistinctTags;
    unsigned long long  _countOfFolderLinks;
    unsigned long long  _countOfMentions;
    unsigned long long  _countOfNoteLinks;
    unsigned long long  _countOfTags;
}

@property (nonatomic) unsigned long long countOfDistinctFolderLinks;
@property (nonatomic) unsigned long long countOfDistinctMentions;
@property (nonatomic) unsigned long long countOfDistinctNoteLinks;
@property (nonatomic) unsigned long long countOfDistinctTags;
@property (nonatomic) unsigned long long countOfFolderLinks;
@property (nonatomic) unsigned long long countOfMentions;
@property (nonatomic) unsigned long long countOfNoteLinks;
@property (nonatomic) unsigned long long countOfTags;

- (unsigned long long)countOfDistinctFolderLinks;
- (unsigned long long)countOfDistinctMentions;
- (unsigned long long)countOfDistinctNoteLinks;
- (unsigned long long)countOfDistinctTags;
- (unsigned long long)countOfFolderLinks;
- (unsigned long long)countOfMentions;
- (unsigned long long)countOfNoteLinks;
- (unsigned long long)countOfTags;
- (void)setCountOfDistinctFolderLinks:(unsigned long long)arg1;
- (void)setCountOfDistinctMentions:(unsigned long long)arg1;
- (void)setCountOfDistinctNoteLinks:(unsigned long long)arg1;
- (void)setCountOfDistinctTags:(unsigned long long)arg1;
- (void)setCountOfFolderLinks:(unsigned long long)arg1;
- (void)setCountOfMentions:(unsigned long long)arg1;
- (void)setCountOfNoteLinks:(unsigned long long)arg1;
- (void)setCountOfTags:(unsigned long long)arg1;

@end
