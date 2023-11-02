
@interface MCDrawableTouchInput : MCTouchInput {
    bool  _isInflectionPoint;
    NSArray * _nearbyKeys;
    struct RefPtr<TI::Favonius::CMTouchHistory> { 
        struct CMTouchHistory {} *m_ptr; 
    }  _touchHistory;
}

@property (nonatomic, readonly) bool isInflectionPoint;
@property (nonatomic, readonly) NSArray *nearbyKeys;
@property (nonatomic, readonly) struct RefPtr<TI::Favonius::CMTouchHistory> { struct CMTouchHistory {} *x1; } touchHistory;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithTouchPoint:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 timestamp:(double)arg3;
- (id)initWithTouchPoint:(struct CGPoint { double x1; double x2; })arg1 radius:(double)arg2 timestamp:(double)arg3 inflectionPoint:(bool)arg4 touchHistory:(const void*)arg5;
- (bool)isInflectionPoint;
- (id)nearbyKeys;
- (struct RefPtr<TI::Favonius::CMTouchHistory> { struct CMTouchHistory {} *x1; })touchHistory;

@end
