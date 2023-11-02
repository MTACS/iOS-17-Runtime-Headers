
@interface ICNANoteReportToDevice : NSObject {
    unsigned long long  _countOfModernNotes;
    unsigned long long  _countOfModernNotesWithDeeplink;
    unsigned long long  _countOfModernNotesWithDrawing;
    unsigned long long  _countOfModernNotesWithImage;
    unsigned long long  _countOfModernNotesWithLinks;
    unsigned long long  _countOfModernNotesWithTable;
    unsigned long long  _countOfModernNotesWithWebHighlights;
    unsigned long long  _countOfPinnedNotes;
    unsigned long long  _countOfScrapPapers;
    unsigned long long  _countOfScrapPapersWithDeepLink;
    unsigned long long  _countOfScrapPapersWithDrawing;
    unsigned long long  _countOfScrapPapersWithImage;
    unsigned long long  _countOfScrapPapersWithLinks;
    unsigned long long  _countOfScrapPapersWithTables;
    unsigned long long  _countOfScrapPapersWithWebHighlights;
}

@property (nonatomic) unsigned long long countOfModernNotes;
@property (nonatomic) unsigned long long countOfModernNotesWithDeeplink;
@property (nonatomic) unsigned long long countOfModernNotesWithDrawing;
@property (nonatomic) unsigned long long countOfModernNotesWithImage;
@property (nonatomic) unsigned long long countOfModernNotesWithLinks;
@property (nonatomic) unsigned long long countOfModernNotesWithTable;
@property (nonatomic) unsigned long long countOfModernNotesWithWebHighlights;
@property (nonatomic) unsigned long long countOfPinnedNotes;
@property (nonatomic) unsigned long long countOfScrapPapers;
@property (nonatomic) unsigned long long countOfScrapPapersWithDeepLink;
@property (nonatomic) unsigned long long countOfScrapPapersWithDrawing;
@property (nonatomic) unsigned long long countOfScrapPapersWithImage;
@property (nonatomic) unsigned long long countOfScrapPapersWithLinks;
@property (nonatomic) unsigned long long countOfScrapPapersWithTables;
@property (nonatomic) unsigned long long countOfScrapPapersWithWebHighlights;

- (unsigned long long)countOfModernNotes;
- (unsigned long long)countOfModernNotesWithDeeplink;
- (unsigned long long)countOfModernNotesWithDrawing;
- (unsigned long long)countOfModernNotesWithImage;
- (unsigned long long)countOfModernNotesWithLinks;
- (unsigned long long)countOfModernNotesWithTable;
- (unsigned long long)countOfModernNotesWithWebHighlights;
- (unsigned long long)countOfPinnedNotes;
- (unsigned long long)countOfScrapPapers;
- (unsigned long long)countOfScrapPapersWithDeepLink;
- (unsigned long long)countOfScrapPapersWithDrawing;
- (unsigned long long)countOfScrapPapersWithImage;
- (unsigned long long)countOfScrapPapersWithLinks;
- (unsigned long long)countOfScrapPapersWithTables;
- (unsigned long long)countOfScrapPapersWithWebHighlights;
- (void)setCountOfModernNotes:(unsigned long long)arg1;
- (void)setCountOfModernNotesWithDeeplink:(unsigned long long)arg1;
- (void)setCountOfModernNotesWithDrawing:(unsigned long long)arg1;
- (void)setCountOfModernNotesWithImage:(unsigned long long)arg1;
- (void)setCountOfModernNotesWithLinks:(unsigned long long)arg1;
- (void)setCountOfModernNotesWithTable:(unsigned long long)arg1;
- (void)setCountOfModernNotesWithWebHighlights:(unsigned long long)arg1;
- (void)setCountOfPinnedNotes:(unsigned long long)arg1;
- (void)setCountOfScrapPapers:(unsigned long long)arg1;
- (void)setCountOfScrapPapersWithDeepLink:(unsigned long long)arg1;
- (void)setCountOfScrapPapersWithDrawing:(unsigned long long)arg1;
- (void)setCountOfScrapPapersWithImage:(unsigned long long)arg1;
- (void)setCountOfScrapPapersWithLinks:(unsigned long long)arg1;
- (void)setCountOfScrapPapersWithTables:(unsigned long long)arg1;
- (void)setCountOfScrapPapersWithWebHighlights:(unsigned long long)arg1;

@end
