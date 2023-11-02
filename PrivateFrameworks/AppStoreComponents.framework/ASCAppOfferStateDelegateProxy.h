
@interface ASCAppOfferStateDelegateProxy : NSObject <ASCAppOfferStateDelegate> {
    <ASCAppOfferStateDelegate> * _target;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <ASCAppOfferStateDelegate> *target;

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1;
- (void)offer:(id)arg1 didChangeState:(id)arg2 withMetadata:(id)arg3 flags:(long long)arg4;
- (void)offer:(id)arg1 didChangeStatusText:(id)arg2;
- (id)target;

@end
