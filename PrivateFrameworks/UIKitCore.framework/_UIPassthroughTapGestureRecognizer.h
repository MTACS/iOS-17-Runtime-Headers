
@interface _UIPassthroughTapGestureRecognizer : UITapGestureRecognizer {
    struct { 
        unsigned int commandHeldThroughAllTouchPhases : 1; 
    }  _flags;
    bool  _tapWasCommandModified;
}

@property (nonatomic, readonly) bool tapWasCommandModified;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)reset;
- (void)setState:(long long)arg1;
- (bool)tapWasCommandModified;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
