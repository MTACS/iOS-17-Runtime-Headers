
@interface _UIEventSessionTouchAction : _UIEventSessionAction {
    long long  _numFingers;
    long long  _tapDragState;
    long long  _windowSection;
}

@property (nonatomic) long long numFingers;
@property (nonatomic) long long tapDragState;
@property (nonatomic) long long windowSection;

- (long long)actionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (long long)mergeActionIfPossible:(id)arg1;
- (long long)numFingers;
- (void)setNumFingers:(long long)arg1;
- (void)setTapDragState:(long long)arg1;
- (void)setWindowSection:(long long)arg1;
- (long long)tapDragState;
- (id)typeEncoding;
- (long long)windowSection;

@end
