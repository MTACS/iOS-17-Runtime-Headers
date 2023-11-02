
@interface ICTTArray : NSObject <ICCRCoding, ICCRDataType, ICTTMergeableStringDelegate> {
    ICTTMergeableAttributedString * _contents;
    NSObject<ICCRUndoDelegate> * _delegate;
    ICCRDocument * _document;
}

@property (nonatomic, readonly) ICTTMergeableAttributedString *contents;
@property (nonatomic, readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<ICCRUndoDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) ICCRDocument *document;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *nsArray;
@property (nonatomic, readonly) NSUUID *replicaUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addUndoCommand:(id)arg1;
- (void)beginEditing;
- (id)contents;
- (unsigned long long)count;
- (id)delegate;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (id)document;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (void)encodeWithICCRCoder:(id)arg1;
- (void)endEditing;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (unsigned long long)hash;
- (unsigned long long)indexOfObject:(id)arg1;
- (id)init;
- (id)initWithArchive:(const void*)arg1 replicaID:(id)arg2;
- (id)initWithContents:(id)arg1;
- (id)initWithDocument:(id)arg1;
- (id)initWithICCRCoder:(id)arg1;
- (id)initWithICCRCoder:(id)arg1 stringArray:(const void*)arg2;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (void)mergeWith:(id)arg1;
- (id)nsArray;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)realizeLocalChangesIn:(id)arg1;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (id)replicaUUID;
- (void)saveToArchive:(void*)arg1;
- (id)serializeDataFromArchive:(const void*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDocument:(id)arg1;
- (id)textAttachmentAtIndex:(unsigned long long)arg1;
- (id)tombstone;
- (void)walkGraph:(id /* block */)arg1;
- (bool)wantsUndoCommands;

@end
