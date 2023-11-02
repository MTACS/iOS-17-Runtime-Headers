
@interface ICASNoteSnapshotItemData : NSObject <AADataEventType> {
    NSNumber * _charLength;
    ICASCollaborationStatus * _collaborationStatus;
    ICASCollaborationType * _collaborationType;
    NSNumber * _countOfAcceptances;
    NSNumber * _countOfAttachmentOther;
    NSNumber * _countOfDocScan;
    NSNumber * _countOfFullscreenDrawing;
    NSNumber * _countOfFullscreenDrawingStrokes;
    NSNumber * _countOfInlineDrawingV1;
    NSNumber * _countOfInlineDrawingV1FingerStrokes;
    NSNumber * _countOfInlineDrawingV1PencilStrokes;
    NSNumber * _countOfInlineDrawingV2;
    NSNumber * _countOfInlineDrawingV2FingerStrokes;
    NSNumber * _countOfInlineDrawingV2PencilStrokes;
    NSNumber * _countOfInvitees;
    NSNumber * _countOfTables;
    NSNumber * _creationDate;
    NSNumber * _hasChecklist;
    NSNumber * _isLocked;
    NSNumber * _isPinned;
    NSString * _noteID;
    ICASNoteType * _noteType;
}

@property (nonatomic, readonly) NSNumber *charLength;
@property (nonatomic, readonly) ICASCollaborationStatus *collaborationStatus;
@property (nonatomic, readonly) ICASCollaborationType *collaborationType;
@property (nonatomic, readonly) NSNumber *countOfAcceptances;
@property (nonatomic, readonly) NSNumber *countOfAttachmentOther;
@property (nonatomic, readonly) NSNumber *countOfDocScan;
@property (nonatomic, readonly) NSNumber *countOfFullscreenDrawing;
@property (nonatomic, readonly) NSNumber *countOfFullscreenDrawingStrokes;
@property (nonatomic, readonly) NSNumber *countOfInlineDrawingV1;
@property (nonatomic, readonly) NSNumber *countOfInlineDrawingV1FingerStrokes;
@property (nonatomic, readonly) NSNumber *countOfInlineDrawingV1PencilStrokes;
@property (nonatomic, readonly) NSNumber *countOfInlineDrawingV2;
@property (nonatomic, readonly) NSNumber *countOfInlineDrawingV2FingerStrokes;
@property (nonatomic, readonly) NSNumber *countOfInlineDrawingV2PencilStrokes;
@property (nonatomic, readonly) NSNumber *countOfInvitees;
@property (nonatomic, readonly) NSNumber *countOfTables;
@property (nonatomic, readonly) NSNumber *creationDate;
@property (nonatomic, readonly) NSNumber *hasChecklist;
@property (nonatomic, readonly) NSNumber *isLocked;
@property (nonatomic, readonly) NSNumber *isPinned;
@property (nonatomic, readonly) NSString *noteID;
@property (nonatomic, readonly) ICASNoteType *noteType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)charLength;
- (id)collaborationStatus;
- (id)collaborationType;
- (id)countOfAcceptances;
- (id)countOfAttachmentOther;
- (id)countOfDocScan;
- (id)countOfFullscreenDrawing;
- (id)countOfFullscreenDrawingStrokes;
- (id)countOfInlineDrawingV1;
- (id)countOfInlineDrawingV1FingerStrokes;
- (id)countOfInlineDrawingV1PencilStrokes;
- (id)countOfInlineDrawingV2;
- (id)countOfInlineDrawingV2FingerStrokes;
- (id)countOfInlineDrawingV2PencilStrokes;
- (id)countOfInvitees;
- (id)countOfTables;
- (id)creationDate;
- (id)hasChecklist;
- (id)initWithNoteID:(id)arg1 noteType:(id)arg2 collaborationStatus:(id)arg3 collaborationType:(id)arg4 countOfInvitees:(id)arg5 countOfAcceptances:(id)arg6 countOfDocScan:(id)arg7 countOfInlineDrawingV1:(id)arg8 countOfInlineDrawingV2:(id)arg9 countOfFullscreenDrawing:(id)arg10 countOfTables:(id)arg11 countOfAttachmentOther:(id)arg12 hasChecklist:(id)arg13 isPinned:(id)arg14 isLocked:(id)arg15 charLength:(id)arg16 creationDate:(id)arg17 countOfInlineDrawingV1PencilStrokes:(id)arg18 countOfInlineDrawingV1FingerStrokes:(id)arg19 countOfInlineDrawingV2PencilStrokes:(id)arg20 countOfInlineDrawingV2FingerStrokes:(id)arg21 countOfFullscreenDrawingStrokes:(id)arg22;
- (id)isLocked;
- (id)isPinned;
- (id)noteID;
- (id)noteType;
- (id)toDict;

@end
