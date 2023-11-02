
@interface CKDMoveRecordHandler : CKDModifyRecordHandler {
    CKMovePhotosChange * _moveChange;
    CKRecord * _serverMoveMarkerRecord;
}

@property (nonatomic, retain) CKMovePhotosChange *moveChange;
@property (nonatomic) CKDMovePhotosOperation *operation;
@property (nonatomic, retain) CKRecord *serverDestinationRecord;
@property (nonatomic, retain) CKRecord *serverMoveMarkerRecord;

+ (id)moveHandlerWithMoveChange:(id)arg1 operation:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithMoveChange:(id)arg1 operation:(id)arg2;
- (id)moveChange;
- (id)record;
- (id)serverDestinationRecord;
- (id)serverMoveMarkerRecord;
- (void)setMoveChange:(id)arg1;
- (void)setServerDestinationRecord:(id)arg1;
- (void)setServerMoveMarkerRecord:(id)arg1;

@end
