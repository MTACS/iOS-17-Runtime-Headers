
@interface MTPBSyncMessage : PBCodable <NSCopying> {
    MTPBDismissAction * _dismissAction;
    MTPBSnoozeAction * _snoozeAction;
    double  _syncDate;
    NSString * _syncID;
    double  _syncVersion;
}

@property (nonatomic, retain) MTPBDismissAction *dismissAction;
@property (nonatomic, readonly) bool hasDismissAction;
@property (nonatomic, readonly) bool hasSnoozeAction;
@property (nonatomic, retain) MTPBSnoozeAction *snoozeAction;
@property (nonatomic) double syncDate;
@property (nonatomic, retain) NSString *syncID;
@property (nonatomic) double syncVersion;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dismissAction;
- (bool)hasDismissAction;
- (bool)hasSnoozeAction;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDismissAction:(id)arg1;
- (void)setSnoozeAction:(id)arg1;
- (void)setSyncDate:(double)arg1;
- (void)setSyncID:(id)arg1;
- (void)setSyncVersion:(double)arg1;
- (id)snoozeAction;
- (double)syncDate;
- (id)syncID;
- (double)syncVersion;
- (void)writeTo:(id)arg1;

@end
