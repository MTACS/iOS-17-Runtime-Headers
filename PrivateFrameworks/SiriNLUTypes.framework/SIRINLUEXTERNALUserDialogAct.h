
@interface SIRINLUEXTERNALUserDialogAct : PBCodable <NSCopying> {
    SIRINLUEXTERNALUserAccepted * _accepted;
    SIRINLUEXTERNALUserAcknowledged * _acknowledged;
    SIRINLUEXTERNALUtteranceAlignment * _alignment;
    SIRINLUEXTERNALUserCancelled * _cancelled;
    SIRINLUEXTERNALDelegatedUserDialogAct * _delegated;
    SIRINLUEXTERNALUserRejected * _rejected;
    SIRINLUEXTERNALUserStatedTask * _userStatedTask;
    SIRINLUEXTERNALUserWantedToPause * _wantedToPause;
    SIRINLUEXTERNALUserWantedToProceed * _wantedToProceed;
    SIRINLUEXTERNALUserWantedToRepeat * _wantedToRepeat;
}

@property (nonatomic, retain) SIRINLUEXTERNALUserAccepted *accepted;
@property (nonatomic, retain) SIRINLUEXTERNALUserAcknowledged *acknowledged;
@property (nonatomic, retain) SIRINLUEXTERNALUtteranceAlignment *alignment;
@property (nonatomic, retain) SIRINLUEXTERNALUserCancelled *cancelled;
@property (nonatomic, retain) SIRINLUEXTERNALDelegatedUserDialogAct *delegated;
@property (nonatomic, readonly) bool hasAccepted;
@property (nonatomic, readonly) bool hasAcknowledged;
@property (nonatomic, readonly) bool hasAlignment;
@property (nonatomic, readonly) bool hasCancelled;
@property (nonatomic, readonly) bool hasDelegated;
@property (nonatomic, readonly) bool hasRejected;
@property (nonatomic, readonly) bool hasUserStatedTask;
@property (nonatomic, readonly) bool hasWantedToPause;
@property (nonatomic, readonly) bool hasWantedToProceed;
@property (nonatomic, readonly) bool hasWantedToRepeat;
@property (nonatomic, retain) SIRINLUEXTERNALUserRejected *rejected;
@property (nonatomic, retain) SIRINLUEXTERNALUserStatedTask *userStatedTask;
@property (nonatomic, retain) SIRINLUEXTERNALUserWantedToPause *wantedToPause;
@property (nonatomic, retain) SIRINLUEXTERNALUserWantedToProceed *wantedToProceed;
@property (nonatomic, retain) SIRINLUEXTERNALUserWantedToRepeat *wantedToRepeat;

- (void).cxx_destruct;
- (id)accepted;
- (id)acknowledged;
- (id)alignment;
- (id)cancelled;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegated;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccepted;
- (bool)hasAcknowledged;
- (bool)hasAlignment;
- (bool)hasCancelled;
- (bool)hasDelegated;
- (bool)hasRejected;
- (bool)hasUserStatedTask;
- (bool)hasWantedToPause;
- (bool)hasWantedToProceed;
- (bool)hasWantedToRepeat;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)rejected;
- (void)setAccepted:(id)arg1;
- (void)setAcknowledged:(id)arg1;
- (void)setAlignment:(id)arg1;
- (void)setCancelled:(id)arg1;
- (void)setDelegated:(id)arg1;
- (void)setRejected:(id)arg1;
- (void)setUserStatedTask:(id)arg1;
- (void)setWantedToPause:(id)arg1;
- (void)setWantedToProceed:(id)arg1;
- (void)setWantedToRepeat:(id)arg1;
- (id)userStatedTask;
- (id)wantedToPause;
- (id)wantedToProceed;
- (id)wantedToRepeat;
- (void)writeTo:(id)arg1;

@end
