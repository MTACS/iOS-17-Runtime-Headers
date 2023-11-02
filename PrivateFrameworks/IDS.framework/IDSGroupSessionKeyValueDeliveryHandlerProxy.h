
@interface IDSGroupSessionKeyValueDeliveryHandlerProxy : NSObject <IDSXPCGroupSessionKeyValueDeliveryDelegate> {
    <IDSGroupSessionKeyValueDeliveryHandler> * _handler;
    NSUUID * _handlerUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <IDSGroupSessionKeyValueDeliveryHandler> *handler;
@property (nonatomic, copy) NSUUID *handlerUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleGroupSessionKeyValues:(id)arg1;
- (id)handler;
- (id)handlerUUID;
- (id)initWithHandler:(id)arg1;
- (void)setHandler:(id)arg1;
- (void)setHandlerUUID:(id)arg1;

@end
