
@interface UPQuery : NSObject {
    <SIRINLUSystemDialogAct><NSObject> * _dialogAct;
    NSDictionary * _embeddingsByToken;
    NSArray * _spans;
    NSArray * _tokens;
    NSString * _utterance;
    NSUUID * _uuid;
}

@property (readonly) <SIRINLUSystemDialogAct><NSObject> *dialogAct;
@property (readonly) NSDictionary *embeddingsByToken;
@property (readonly, copy) NSArray *spans;
@property (readonly) NSArray *tokens;
@property (readonly, copy) NSString *utterance;
@property (readonly, copy) NSUUID *uuid;

+ (id)tokenDescription:(id)arg1;

- (void).cxx_destruct;
- (id)_buildEmbeddingsDictionaryWithNonWhitespaceTokens:(id)arg1 nonWhitespaceTokenIndexes:(id)arg2 embeddings:(id)arg3 error:(id*)arg4;
- (id)_buildTokenListWithTokenChain:(id)arg1 nonWhitespaceTokenIndexes:(id)arg2;
- (id)_createDialogActWithProtobufQuery:(id)arg1;
- (id)_getNonWhitespaceTokenIndexes:(id)arg1;
- (id)buildSpansListWithProtobufQuery:(id)arg1 nonWhitespaceTokenIndexes:(id)arg2 error:(id*)arg3;
- (id)description;
- (id)dialogAct;
- (id)embeddingsByToken;
- (id)initWithProtobufQuery:(id)arg1 error:(id*)arg2;
- (id)initWithUtterance:(id)arg1 tokens:(id)arg2 embeddingsByToken:(id)arg3 spans:(id)arg4 dialogAct:(id)arg5;
- (id)spans;
- (id)tokens;
- (id)utterance;
- (id)uuid;

@end
