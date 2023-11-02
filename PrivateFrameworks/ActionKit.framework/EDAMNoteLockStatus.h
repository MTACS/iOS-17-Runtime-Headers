
@interface EDAMNoteLockStatus : FATObject {
    NSNumber * _currentTime;
    NSNumber * _lockHolderUserId;
    NSNumber * _lockRenewBy;
    NSNumber * _noteUpdateSequenceNumber;
    NSDictionary * _unknownUsers;
    NSNumber * _viewIdleExpiration;
    NSArray * _viewingUserIds;
}

@property (nonatomic, retain) NSNumber *currentTime;
@property (nonatomic, retain) NSNumber *lockHolderUserId;
@property (nonatomic, retain) NSNumber *lockRenewBy;
@property (nonatomic, retain) NSNumber *noteUpdateSequenceNumber;
@property (nonatomic, retain) NSDictionary *unknownUsers;
@property (nonatomic, retain) NSNumber *viewIdleExpiration;
@property (nonatomic, retain) NSArray *viewingUserIds;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)currentTime;
- (id)lockHolderUserId;
- (id)lockRenewBy;
- (id)noteUpdateSequenceNumber;
- (void)setCurrentTime:(id)arg1;
- (void)setLockHolderUserId:(id)arg1;
- (void)setLockRenewBy:(id)arg1;
- (void)setNoteUpdateSequenceNumber:(id)arg1;
- (void)setUnknownUsers:(id)arg1;
- (void)setViewIdleExpiration:(id)arg1;
- (void)setViewingUserIds:(id)arg1;
- (id)unknownUsers;
- (id)viewIdleExpiration;
- (id)viewingUserIds;

@end
