
@interface SBSnapshotSlotIdWrapper : NSObject {
    CAContext * _context;
    unsigned int  _slotId;
}

@property (nonatomic, readonly) CAContext *context;
@property (nonatomic, readonly) unsigned int slotId;

- (void).cxx_destruct;
- (id)context;
- (void)dealloc;
- (id)init;
- (id)initWithContext:(id)arg1 slotId:(unsigned int)arg2;
- (unsigned int)slotId;

@end
