
@interface ABChangeHistoryEvent : NSObject {
    int  _entityType;
    int  _eventType;
    NSString * _externalID;
    bool  _imagesChanged;
    NSString * _linkToPersonUUID;
    int  _personLink;
    NSString * _personLinkUUID;
    NSString * _recordGUID;
    int  _recordID;
    long long  _sequenceNumber;
}

@property (nonatomic, readonly) int entityType;
@property (nonatomic, readonly) int eventType;
@property (nonatomic, readonly) NSString *externalID;
@property (nonatomic, readonly) bool imagesChanged;
@property (nonatomic, readonly) NSString *linkToPersonUUID;
@property (nonatomic, readonly) int personLink;
@property (nonatomic, readonly) NSString *personLinkUUID;
@property (nonatomic, readonly) NSString *recordGUID;
@property (nonatomic, readonly) int recordID;
@property (nonatomic, readonly) long long sequenceNumber;

+ (id)groupAddEventWithRecordID:(int)arg1 identifier:(id)arg2;
+ (id)groupDeleteEventWithRecordID:(int)arg1 identifier:(id)arg2 externalID:(id)arg3;
+ (id)groupUpdateEventWithRecordID:(int)arg1 identifier:(id)arg2;
+ (id)groupWithRecordID:(int)arg1 identifier:(id)arg2 eventType:(int)arg3 externalID:(id)arg4;
+ (id)linkEventWithRecordID:(int)arg1 identifier:(id)arg2 linkToIdentifier:(id)arg3 unifiedIdentifier:(id)arg4;
+ (id)meCardChangedEventWithRecordID:(int)arg1 identifier:(id)arg2;
+ (id)personAddEventWithRecordID:(int)arg1 identifier:(id)arg2;
+ (id)personDeleteEventWithRecordID:(int)arg1 identifier:(id)arg2 externalID:(id)arg3 personLink:(int)arg4;
+ (id)personUpdateEventWithRecordID:(int)arg1 identifier:(id)arg2 imagesChanged:(bool)arg3 personLink:(int)arg4;
+ (id)personWithRecordID:(int)arg1 identifier:(id)arg2 eventType:(int)arg3;
+ (id)personWithRecordID:(int)arg1 identifier:(id)arg2 eventType:(int)arg3 imagesChanged:(bool)arg4 externalID:(id)arg5 personLink:(int)arg6;
+ (id)setPreferredImageEventWithRecordID:(int)arg1 identifier:(id)arg2;
+ (id)setPreferredNameEventWithRecordID:(int)arg1 identifier:(id)arg2;
+ (id)unifiedPersonAddEventWithUnifiedIdentifier:(id)arg1;
+ (id)unifiedPersonDeleteEventWithUnifiedIdentifier:(id)arg1;
+ (id)unifiedPersonUpdateEventWithUnifiedIdentifier:(id)arg1;
+ (id)unifiedPersonWithIdentifier:(id)arg1 eventType:(int)arg2;
+ (id)unlinkEventWithRecordID:(int)arg1 identifier:(id)arg2;

- (void)dealloc;
- (id)description;
- (id)descriptionForEntityType:(int)arg1;
- (id)descriptionForEventType:(int)arg1;
- (int)entityType;
- (int)eventType;
- (id)externalID;
- (bool)imagesChanged;
- (id)initWithEntityType:(int)arg1 eventType:(int)arg2 sequenceNumber:(long long)arg3 recordID:(int)arg4 recordGUID:(id)arg5 externalID:(id)arg6 imagesChanged:(bool)arg7 personLink:(int)arg8 personLinkUUID:(id)arg9 linkToPersonUUID:(id)arg10;
- (bool)isEqual:(id)arg1;
- (bool)isSequenceNumber:(long long)arg1 equalToOther:(long long)arg2;
- (id)linkToPersonUUID;
- (int)personLink;
- (id)personLinkUUID;
- (id)recordGUID;
- (int)recordID;
- (long long)sequenceNumber;

@end
