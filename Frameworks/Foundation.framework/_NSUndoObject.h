
@interface _NSUndoObject : NSObject {
    id  _target;
    _NSUndoObject * next;
    _NSUndoObject * previous;
}

- (id)init;
- (id)initWithTarget:(id)arg1;
- (void)invoke;
- (bool)isBeginMark;
- (bool)isEndMark;
- (id)target;

@end
