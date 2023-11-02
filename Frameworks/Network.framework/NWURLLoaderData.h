
@interface NWURLLoaderData : NSObject <NWURLLoader> {
    NSString * _MIMEType;
    NSURL * _URL;
    NSObject<OS_dispatch_data> * _data;
    unsigned long long  _offset;
    NSString * _textEncodingName;
}

@property (nonatomic, readonly) bool allowsWrite;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_sec_trust> *peerTrust;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSObject<OS_nw_connection> *underlyingConnection;

- (void).cxx_destruct;
- (bool)allowsWrite;
- (id)peerTrust;
- (void)readDataOfMinimumIncompleteLength:(unsigned long long)arg1 maximumLength:(unsigned long long)arg2 completionHandler:(id /* block */)arg3;
- (void)readResponse:(id /* block */)arg1;
- (void)responseIsMixed;
- (void)start:(id /* block */)arg1;
- (void)stop;
- (id)underlyingConnection;
- (void)updateClient:(id)arg1;
- (void)writeData:(id)arg1 complete:(bool)arg2 completionHandler:(id /* block */)arg3;

@end
