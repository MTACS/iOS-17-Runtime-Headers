
@interface JFXCompositionPlayableElementUpdateRequest : JFXCompositionPlayerRequest {
    NSString * _clipUUID;
}

@property (nonatomic, retain) NSString *clipUUID;

- (void).cxx_destruct;
- (id)clipUUID;
- (id)description;
- (id)initWithBlock:(id /* block */)arg1 withClip:(id)arg2;
- (void)setClipUUID:(id)arg1;

@end
