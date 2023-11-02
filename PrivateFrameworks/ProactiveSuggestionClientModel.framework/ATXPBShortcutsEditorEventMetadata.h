
@interface ATXPBShortcutsEditorEventMetadata : PBCodable <NSCopying> {
    struct { 
        unsigned int numStepsInShortcut : 1; 
    }  _has;
    unsigned int  _numStepsInShortcut;
}

@property (nonatomic) bool hasNumStepsInShortcut;
@property (nonatomic) unsigned int numStepsInShortcut;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasNumStepsInShortcut;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numStepsInShortcut;
- (bool)readFrom:(id)arg1;
- (void)setHasNumStepsInShortcut:(bool)arg1;
- (void)setNumStepsInShortcut:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
