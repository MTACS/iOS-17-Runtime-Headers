
@interface DAAction : NSObject <NSSecureCoding> {
    int  _changeId;
    id  _changedItem;
    id  _forwardedAttendeeUUIDs;
    id  _forwardedAttendees;
    bool  _ignoresGuardianRestrictions;
    id  _instanceId;
    unsigned long long  _itemChangeType;
    id  _serverId;
}

@property (nonatomic) int changeId;
@property (setter=_setChangedItem:, nonatomic, retain) id changedItem;
@property (nonatomic, retain) id forwardedAttendeeUUIDs;
@property (nonatomic, retain) id forwardedAttendees;
@property (nonatomic) bool ignoresGuardianRestrictions;
@property (nonatomic, retain) id instanceId;
@property (nonatomic) unsigned long long itemChangeType;
@property (nonatomic, retain) id serverId;

// Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setChangedItem:(id)arg1;
- (int)changeId;
- (id)changedItem;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardedAttendeeUUIDs;
- (id)forwardedAttendees;
- (unsigned long long)hash;
- (bool)ignoresGuardianRestrictions;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 serverId:(id)arg3;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 serverId:(id)arg3 instanceId:(id)arg4;
- (id)instanceId;
- (bool)isEqual:(id)arg1;
- (unsigned long long)itemChangeType;
- (id)message;
- (id)serverId;
- (void)setChangeId:(int)arg1;
- (void)setForwardedAttendeeUUIDs:(id)arg1;
- (void)setForwardedAttendees:(id)arg1;
- (void)setIgnoresGuardianRestrictions:(bool)arg1;
- (void)setInstanceId:(id)arg1;
- (void)setItemChangeType:(unsigned long long)arg1;
- (void)setServerId:(id)arg1;
- (id)stringForItemChangeType:(unsigned long long)arg1;

// Image: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS

- (void)appendApplicationDataForTask:(id)arg1 toWBXMLData:(id)arg2;
- (id)asClientID;
- (id)asInstanceID;
- (id)asServerID;

@end
