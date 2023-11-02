
@interface JFXCompositionSeekRequest : JFXCompositionPlayerRequest {
    int  _seekTime;
}

@property (nonatomic) int seekTime;

- (id)description;
- (id)initWithBlock:(id /* block */)arg1 withSeekTime:(int)arg2;
- (int)seekTime;
- (void)setSeekTime:(int)arg1;

@end
