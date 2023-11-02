
@interface MUISearchSenderQueryManager : NSObject {
    EFFuture * _senderFilterQueryFuture;
    EMSenderRepository * _senderRepository;
}

@property (nonatomic, readonly) EFFuture *senderFilterQueryFuture;

- (void).cxx_destruct;
- (id)initWithSenderRepository:(id)arg1;
- (id)senderFilterQueryFuture;

@end
