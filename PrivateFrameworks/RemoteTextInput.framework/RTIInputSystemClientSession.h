
@interface RTIInputSystemClientSession : NSObject {
    RTISessionOptions * _beginOptions;
    RTIDocumentState * _documentState;
    RTIDocumentTraits * _documentTraits;
}

@property (nonatomic, retain) RTISessionOptions *beginOptions;
@property (nonatomic, retain) RTIDocumentState *documentState;
@property (nonatomic, retain) RTIDocumentTraits *documentTraits;

- (void).cxx_destruct;
- (id)beginOptions;
- (id)documentState;
- (id)documentTraits;
- (void)setBeginOptions:(id)arg1;
- (void)setDocumentState:(id)arg1;
- (void)setDocumentTraits:(id)arg1;

@end
