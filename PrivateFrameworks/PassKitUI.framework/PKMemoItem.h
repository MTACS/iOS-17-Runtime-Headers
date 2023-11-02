
@interface PKMemoItem : NSObject <PKIdentifiable> {
    PKPeerPaymentRecurringPaymentMemo * _memo;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, retain) PKPeerPaymentRecurringPaymentMemo *memo;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithMemo:(id)arg1 type:(unsigned long long)arg2;
- (id)memo;
- (void)setMemo:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
