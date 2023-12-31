
@interface PKReplicaEntry : NSObject <NSCoding> {
    unsigned int  _clock;
    PKDrawingConcrete * _drawing;
    bool  _inUse;
    unsigned int  _replicaUUIDIndex;
    unsigned int  _subclock;
}

@property (nonatomic) unsigned int clock;
@property (nonatomic) PKDrawingConcrete *drawing;
@property (nonatomic) bool inUse;
@property (nonatomic) unsigned int replicaUUIDIndex;
@property (nonatomic) unsigned int subclock;

- (unsigned int)clock;
- (id)description;
- (id)drawing;
- (void)encodeWithCoder:(id)arg1;
- (bool)inUse;
- (id)initWithCoder:(id)arg1;
- (id)initWithReplicaUUIDIndex:(unsigned int)arg1 clock:(unsigned int)arg2 subclock:(unsigned int)arg3 inUse:(bool)arg4 forDrawing:(id)arg5;
- (unsigned int)replicaUUIDIndex;
- (void)setClock:(unsigned int)arg1;
- (void)setDrawing:(id)arg1;
- (void)setInUse:(bool)arg1;
- (void)setReplicaUUIDIndex:(unsigned int)arg1;
- (void)setSubclock:(unsigned int)arg1;
- (unsigned int)subclock;

@end
