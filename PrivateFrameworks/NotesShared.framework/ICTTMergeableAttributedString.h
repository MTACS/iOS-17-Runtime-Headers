
@interface ICTTMergeableAttributedString : ICTTMergeableUndoString <ICCRCoding> {
    NSAttributedString * _editsAttributedString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSArray *edits;
@property (nonatomic, retain) NSAttributedString *editsAttributedString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allowedAttributesForModel;
+ (id)allowedAttributesForStyle;
+ (id)allowedTypingAttributes;
+ (int)attributeForWritingDirection:(long long)arg1;
+ (id)attributesForRun:(const void*)arg1;
+ (void)saveAttributes:(id)arg1 toArchive:(void*)arg2;
+ (void)saveAttributesOfString:(id)arg1 toArchive:(void*)arg2;
+ (long long)writingDirectionForAttribute:(int)arg1;

- (void).cxx_destruct;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg2;
- (bool)attributesEqual:(id)arg1 to:(id)arg2 modelEqual:(bool*)arg3;
- (bool)attributesEqual:(id)arg1 toRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 modelEqual:(bool*)arg3;
- (id)editAtIndex:(unsigned long long)arg1;
- (id)edits;
- (id)editsAttributedString;
- (id)editsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)encodeWithICCRCoder:(id)arg1;
- (void)encodeWithICCRCoder:(id)arg1 string:(void*)arg2;
- (void)enumerateEditsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)initWithArchive:(const void*)arg1 replicaID:(id)arg2 orderedSubstrings:(void*)arg3 timestamp:(id)arg4 fragment:(bool)arg5;
- (id)initWithICCRCoder:(id)arg1;
- (id)initWithICCRCoder:(id)arg1 string:(const void*)arg2;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)removeTimestampsForReplicaID:(id)arg1;
- (void)replaceCharactersInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (void)saveDeltaSinceTimestamp:(id)arg1 toArchive:(void*)arg2;
- (void)saveToArchive:(void*)arg1;
- (id)serialize;
- (void)setAttributes:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setAttributes:(id)arg1 substring:(void*)arg2;
- (void)setEditsAttributedString:(id)arg1;
- (void)setTimestamp:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)updateCache;

@end
