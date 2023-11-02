
@interface DocumentUnderstanding.DURequestStrategy : NSObject {
    void contentType;
    void modelIdentifier;
}

@property (nonatomic, retain) _TtC21DocumentUnderstanding20DURequestContentType *contentType;
@property (nonatomic, copy) NSString *modelIdentifier;

- (void).cxx_destruct;
- (id)contentType;
- (id)init;
- (id)initWithContentType:(id)arg1 preferredModelIdentifier:(id)arg2;
- (id)modelIdentifier;
- (void)setContentType:(id)arg1;
- (void)setModelIdentifier:(id)arg1;

@end
