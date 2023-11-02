
@interface _UIEventSessionHoverAction : _UIEventSessionAction {
    long long  _numFingers;
    long long  _tapDragState;
}

@property (nonatomic) long long numFingers;
@property (nonatomic) long long tapDragState;

- (long long)actionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)mergeActionIfPossible:(id)arg1;
- (long long)numFingers;
- (void)setNumFingers:(long long)arg1;
- (void)setTapDragState:(long long)arg1;
- (long long)tapDragState;
- (id)typeEncoding;

@end
