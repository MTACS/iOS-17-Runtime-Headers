
@interface ASCompetitionList : NSObject <ASCloudKitCodable, NSCopying> {
    NSArray * _competitions;
    NSUUID * _friendUUID;
    CKRecord * _systemFieldsOnlyRecord;
    long long  _type;
}

@property (nonatomic, readonly) ASCodableCloudKitCompetitionList *codableCompetitionList;
@property (nonatomic, retain) NSArray *competitions;
@property (nonatomic, readonly) ASCompetition *currentCompetition;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSUUID *friendUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) CKRecord *systemFieldsOnlyRecord;
@property (nonatomic) long long type;

+ (id)competitionListFromCodableDatabaseCompetitionList:(id)arg1 codableCompetitions:(id)arg2 withType:(long long)arg3;
+ (id)competitionListWithCodableCompetitionList:(id)arg1;
+ (id)competitionListWithRecord:(id)arg1;

- (void).cxx_destruct;
- (id)codableCompetitionList;
- (id)codableDatabaseCompetitionListEntryForOwner:(long long)arg1;
- (id)competitions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentCompetition;
- (id)description;
- (id)friendUUID;
- (id)init;
- (id)initWithFriendUUID:(id)arg1 type:(long long)arg2;
- (id)recordWithZoneID:(id)arg1;
- (void)setCompetitions:(id)arg1;
- (void)setFriendUUID:(id)arg1;
- (void)setSystemFieldsOnlyRecord:(id)arg1;
- (void)setType:(long long)arg1;
- (id)systemFieldsOnlyRecord;
- (long long)type;

@end
