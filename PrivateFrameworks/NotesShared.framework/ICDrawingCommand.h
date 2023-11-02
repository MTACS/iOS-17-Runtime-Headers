
@interface ICDrawingCommand : NSObject {
    ICDrawingCommandData * _data;
    bool  _hidden;
    struct TopoID { 
        NSUUID *replicaID; 
        unsigned int clock; 
    }  _timestamp;
}

@property (nonatomic, readonly) ICDrawingCommandData *data;
@property (nonatomic, readonly) bool hidden;
@property (nonatomic, readonly) struct TopoID { id x1; unsigned int x2; } timestamp;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)data;
- (id)description;
- (unsigned long long)hash;
- (bool)hidden;
- (id)initWithArchive:(const void*)arg1 version:(unsigned int)arg2 sortedUUIDs:(id)arg3;
- (id)initWithCommand:(id)arg1 hidden:(bool)arg2 timestamp:(struct TopoID { id x1; unsigned int x2; })arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualDrawingCommand:(id)arg1;
- (unsigned int)saveToArchive:(void*)arg1 sortedUUIDs:(id)arg2 withPathData:(bool)arg3;
- (struct TopoID { id x1; unsigned int x2; })timestamp;

@end
