
@interface SAStrokeData : NSObject {
    SAStrokeDataInternal * _underlyingObject;
}

@property (nonatomic, retain) SAStrokeDataInternal *underlyingObject;

- (void).cxx_destruct;
- (id)initWithCharacter:(id)arg1 strokeAnimationRepresention:(id)arg2 strokeNames:(id)arg3 pronunciation:(id)arg4;
- (id)initWithCharacters:(id)arg1 strokeAnimationRepresention:(id)arg2 strokeNames:(id)arg3 pronunciations:(id)arg4;
- (void)setUnderlyingObject:(id)arg1;
- (id)underlyingObject;

@end
