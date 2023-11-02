
@interface STVersionVector : NSObject <NSCopying> {
    NSString * _editorIdentifier;
    NSMutableDictionary * _nodeByIdentifier;
}

@property (nonatomic, readonly, copy) NSData *dataRepresentation;
@property (nonatomic, copy) NSString *editorIdentifier;
@property (nonatomic, retain) NSMutableDictionary *nodeByIdentifier;
@property (nonatomic, readonly) NSArray *nodes;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentation;
- (id)debugDescription;
- (id)description;
- (id)editorIdentifier;
- (unsigned long long)evaluateCausality:(id)arg1;
- (void)incrementNodeWithIdentifier:(id)arg1;
- (id)init;
- (id)initWithDataRepresentation:(id)arg1;
- (id)initWithNode:(id)arg1;
- (bool)isConcurrentWithVersionVector:(id)arg1;
- (bool)isEqualToVersionVector:(id)arg1;
- (void)join:(id)arg1;
- (id)nodeByIdentifier;
- (id)nodes;
- (bool)precedesVersionVector:(id)arg1;
- (void)setEditorIdentifier:(id)arg1;
- (void)setNodeByIdentifier:(id)arg1;

@end
