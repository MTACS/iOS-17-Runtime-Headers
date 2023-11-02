
@interface ICNoteUserActivityState : ICNoteBaseUserActivityState {
    NSData * _contentHash;
    NSDate * _creationDate;
    bool  _editing;
    NSString * _folderID;
    NSString * _folderName;
    NSDate * _modificationDate;
    NSString * _noteID;
    ICTextViewScrollState * _scrollState;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectionRange;
    NSData * _selectionRangeData;
    NSString * _title;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _visibleRange;
    NSData * _visibleRangeData;
    bool  _wantsContinuationStreams;
}

@property (nonatomic, copy) NSData *contentHash;
@property (nonatomic, copy) NSDate *creationDate;
@property (getter=isEditing, nonatomic) bool editing;
@property (nonatomic, copy) NSString *folderID;
@property (nonatomic, copy) NSString *folderName;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, copy) NSString *noteID;
@property (nonatomic, retain) ICTextViewScrollState *scrollState;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectionRange;
@property (nonatomic, copy) NSData *selectionRangeData;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } visibleRange;
@property (nonatomic, copy) NSData *visibleRangeData;
@property (nonatomic) bool wantsContinuationStreams;

- (void).cxx_destruct;
- (id)contentHash;
- (id)creationDate;
- (id)folderID;
- (id)folderName;
- (id)initWithNote:(id)arg1;
- (bool)isEditing;
- (id)modificationDate;
- (id)noteID;
- (id)scrollState;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRange;
- (id)selectionRangeData;
- (void)setContentHash:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setFolderID:(id)arg1;
- (void)setFolderName:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setNoteID:(id)arg1;
- (void)setScrollState:(id)arg1;
- (void)setSelectionRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSelectionRangeData:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVisibleRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setVisibleRangeData:(id)arg1;
- (void)setWantsContinuationStreams:(bool)arg1;
- (id)title;
- (void)updateUserActivity:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })visibleRange;
- (id)visibleRangeData;
- (bool)wantsContinuationStreams;

@end
