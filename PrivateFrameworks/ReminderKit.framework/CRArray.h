
@interface CRArray : NSObject <CRCoding, CRDataType, CRUndoDelegate> {
    TTArray * _array;
    CRDictionary * _contents;
    NSObject<CRUndoDelegate> * _delegate;
    CRDocument * _document;
    bool  _moveClock;
}

@property (nonatomic, retain) TTArray *array;
@property (nonatomic, retain) CRDictionary *contents;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<CRUndoDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) CRDocument *document;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool moveClock;
@property (nonatomic, readonly) NSUUID *replicaUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_addObject:(id)arg1;
- (id)_insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)_insertObject:(id)arg1 withIdentifier:(id)arg2 atIndex:(unsigned long long)arg3 forUndo:(bool)arg4;
- (void)addObject:(id)arg1;
- (void)addUndoCommandsForObject:(id)arg1 block:(id /* block */)arg2;
- (id)array;
- (id)contents;
- (unsigned long long)count;
- (id)delegate;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (id)document;
- (void)encodeWithCRCoder:(id)arg1;
- (void)encodeWithCRCoder:(id)arg1 array:(void*)arg2;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (unsigned long long)firstIndexOf:(id)arg1 fromIndex:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1 array:(const void*)arg2;
- (id)initWithDocument:(id)arg1;
- (id)initWithTTArray:(id)arg1 contents:(id)arg2 document:(id)arg3;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeWith:(id)arg1;
- (bool)moveClock;
- (void)moveObjectFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObjectAtIndex:(unsigned long long)arg1 forUndo:(bool)arg2;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)replicaUUID;
- (void)setArray:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setMoveClock:(bool)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;
- (bool)wantsUndoCommands;

@end
