
@interface DURequestStrategyObjC : NSObject {
    DURequestContentTypeObjC * _objCContentType;
    _TtC21DocumentUnderstanding17DURequestStrategy * _underlyingStrategy;
}

@property (nonatomic, readonly) DURequestContentTypeObjC *contentType;
@property (nonatomic, copy) NSString *modelIdentifier;

- (void).cxx_destruct;
- (id)contentType;
- (id)initWithContentType:(id)arg1 preferredModelIdentifier:(id)arg2;
- (id)modelIdentifier;
- (void)setContentType:(id)arg1;
- (void)setModelIdentifier:(id)arg1;

@end
