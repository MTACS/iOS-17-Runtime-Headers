
@interface CKDDeclineShareMetadata : NSObject <CKRoughlyEquivalent> {
    NSString * _participantID;
    CKRecordID * _shareRecordID;
    NSURL * _shareURL;
}

@property (nonatomic, readonly) CKRoughlyEquivalentProperties *equivalencyProperties;
@property (nonatomic, retain) NSString *participantID;
@property (nonatomic, retain) CKRecordID *shareRecordID;
@property (nonatomic, retain) NSURL *shareURL;

- (void).cxx_destruct;
- (id)equivalencyProperties;
- (id)participantID;
- (void)setParticipantID:(id)arg1;
- (void)setShareRecordID:(id)arg1;
- (void)setShareURL:(id)arg1;
- (id)shareRecordID;
- (id)shareURL;

@end
