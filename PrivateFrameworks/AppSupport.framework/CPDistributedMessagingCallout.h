
@interface CPDistributedMessagingCallout : NSObject {
    bool  _returnsVoid;
    bool  _returnsVoidIsValid;
    SEL  _selector;
    id  _target;
}

@property (nonatomic, readonly) bool returnsVoid;
@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly, retain) id target;

- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (bool)returnsVoid;
- (SEL)selector;
- (id)target;

@end
