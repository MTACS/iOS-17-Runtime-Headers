
@interface PKStrokeDelta : NSObject {
    _PKStrokeConcrete * _deltaStroke;
    PKStrokePath * _deltaStrokeData;
    NSUUID * _strokeUUID;
}

@property (nonatomic, retain) NSUUID *_strokeUUID;
@property (nonatomic, retain) _PKStrokeConcrete *deltaStroke;
@property (nonatomic, retain) PKStrokePath *deltaStrokeData;

- (void).cxx_destruct;
- (id)_strokeUUID;
- (id)dataRepresentation;
- (id)deltaStroke;
- (id)deltaStrokeData;
- (id)description;
- (id)initWithArchive:(const void*)arg1 error:(id*)arg2;
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (void)saveToArchive:(void*)arg1;
- (void)setDeltaStroke:(id)arg1;
- (void)setDeltaStrokeData:(id)arg1;
- (void)set_strokeUUID:(id)arg1;

@end
