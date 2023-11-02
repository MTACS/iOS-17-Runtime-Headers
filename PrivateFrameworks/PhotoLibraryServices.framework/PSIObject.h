
@interface PSIObject : NSObject <NSCopying> {
    NSMutableDictionary * _synonymsByOriginalLookupIdentifier;
    NSMutableDictionary * _synonymsByOriginalWord;
    NSArray * _tokens;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSArray *tokens;
@property (setter=setUUID:, nonatomic, copy) NSString *uuid;

- (void).cxx_destruct;
- (id)_initForCopy:(bool)arg1;
- (void)addContentString:(id)arg1 category:(short)arg2 owningCategory:(short)arg3;
- (void)addContentString:(id)arg1 identifier:(id)arg2 category:(short)arg3 owningCategory:(short)arg4;
- (void)addIdentifier:(id)arg1 category:(short)arg2 owningCategory:(short)arg3;
- (void)addSynonym:(id)arg1 category:(short)arg2 originalContentString:(id)arg3;
- (void)addSynonym:(id)arg1 lookupIdentifier:(id)arg2 category:(short)arg3 originalContentString:(id)arg4;
- (void)clear;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)enumerateSynonymsForOriginalContentString:(id)arg1 orOriginalLookupIdentifier:(id)arg2 handler:(id /* block */)arg3;
- (id)initForReverse;
- (id)initWithUUID:(id)arg1;
- (void)reverse;
- (void)setUUID:(id)arg1;
- (id)tokens;
- (id)uuid;

@end
