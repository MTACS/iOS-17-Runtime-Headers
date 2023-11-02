
@interface HKCloudSyncZoneDescription : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _otherParticipantsDescription;
    HKCloudSyncShareParticipantDescription * _ownerParticipantDescription;
    NSArray * _recordDescriptions;
    NSString * _type;
    HKCloudSyncRecordZoneIDDescription * _zoneIDDescription;
}

@property (nonatomic, readonly, copy) NSArray *otherParticipantsDescription;
@property (nonatomic, readonly, copy) HKCloudSyncShareParticipantDescription *ownerParticipantDescription;
@property (nonatomic, readonly, copy) NSArray *recordDescriptions;
@property (nonatomic, readonly, copy) NSString *type;
@property (nonatomic, readonly, copy) HKCloudSyncRecordZoneIDDescription *zoneIDDescription;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneIDDescription:(id)arg1 type:(id)arg2 ownerParticipantDescription:(id)arg3 otherParticipantsDescription:(id)arg4 recordDescriptions:(id)arg5;
- (id)otherParticipantsDescription;
- (id)ownerParticipantDescription;
- (id)recordDescriptions;
- (id)type;
- (id)zoneIDDescription;

@end
