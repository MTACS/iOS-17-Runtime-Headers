
@interface TLTimelineOperation : TLOperation {
    <TLIdentifiable> * _identifiable;
}

@property (nonatomic, readonly) <TLIdentifiable> *identifiable;
@property (copy) id /* block */ timelineOperationCompletionBlock;

- (void).cxx_destruct;
- (id)identifiable;
- (id)initWithIdentifiable:(id)arg1;
- (void)setTimelineOperationCompletionBlock:(id /* block */)arg1;
- (id /* block */)timelineOperationCompletionBlock;

@end
