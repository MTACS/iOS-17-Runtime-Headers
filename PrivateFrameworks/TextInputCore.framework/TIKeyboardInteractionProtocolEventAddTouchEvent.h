
@interface TIKeyboardInteractionProtocolEventAddTouchEvent : NSObject <NSSecureCoding, TIKeyboardInteractionProtocolEvent> {
    TIKeyboardTouchEvent * _touchEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) TIKeyboardTouchEvent *touchEvent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTouchEvent:(id)arg1;
- (void)sendTo:(id)arg1;
- (id)touchEvent;

@end
