
@interface BLTRemoteRequest : NSObject {
    bool  _allowCloudDelivery;
    id /* block */  _didQueue;
    id /* block */  _didSend;
    bool  _nonWaking;
    PBCodable * _protobuf;
    NSString * _requestDescription;
    id /* block */  _responseCompletion;
    IDSProtobuf * _responseToRequest;
    NSNumber * _timeout;
    unsigned short  _type;
    NSString * _uniqueID;
}

@property (nonatomic) bool allowCloudDelivery;
@property (nonatomic, copy) id /* block */ didQueue;
@property (nonatomic, copy) id /* block */ didSend;
@property (nonatomic) bool nonWaking;
@property (nonatomic, retain) PBCodable *protobuf;
@property (nonatomic, copy) NSString *requestDescription;
@property (nonatomic, copy) id /* block */ responseCompletion;
@property (nonatomic, retain) IDSProtobuf *responseToRequest;
@property (nonatomic, retain) NSNumber *timeout;
@property (nonatomic) unsigned short type;
@property (nonatomic, copy) NSString *uniqueID;

+ (id)remoteRequestWithProtobuf:(id)arg1 type:(unsigned short)arg2;

- (void).cxx_destruct;
- (bool)allowCloudDelivery;
- (id)description;
- (id /* block */)didQueue;
- (id /* block */)didSend;
- (id)initWithProtobuf:(id)arg1 type:(unsigned short)arg2;
- (bool)nonWaking;
- (id)protobuf;
- (id)requestDescription;
- (id /* block */)responseCompletion;
- (id)responseToRequest;
- (void)setAllowCloudDelivery:(bool)arg1;
- (void)setDidQueue:(id /* block */)arg1;
- (void)setDidSend:(id /* block */)arg1;
- (void)setNonWaking:(bool)arg1;
- (void)setProtobuf:(id)arg1;
- (void)setRequestDescription:(id)arg1;
- (void)setResponseCompletion:(id /* block */)arg1;
- (void)setResponseToRequest:(id)arg1;
- (void)setTimeout:(id)arg1;
- (void)setType:(unsigned short)arg1;
- (void)setUniqueID:(id)arg1;
- (id)timeout;
- (unsigned short)type;
- (id)uniqueID;

@end
