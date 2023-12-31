
@interface _TVRXSearchReference : NSObject {
    id  _completionBlock;
    NSTimer * _expirationTimer;
    NSString * _identifier;
}

@property (nonatomic, copy) id completionBlock;
@property (nonatomic) NSTimer *expirationTimer;
@property (nonatomic, copy) NSString *identifier;

- (void).cxx_destruct;
- (id)completionBlock;
- (id)expirationTimer;
- (id)identifier;
- (void)setCompletionBlock:(id)arg1;
- (void)setExpirationTimer:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end
