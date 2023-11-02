
@interface CryptexTSS : NSObject {
    NSData * _c411_content;
    NSObject<OS_dispatch_queue> * _dq;
    unsigned long long  _flags;
    NSObject<OS_xpc_object> * _im4m_array;
    NSObject<OS_os_log> * _log;
    NSError * _nserr;
    NSDictionary * _response;
    NSString * _tssURL;
    NSString * _tssUsage;
    NSObject<OS_xpc_object> * _tss_request;
    NSObject<OS_cryptex_signature> * _tssp_sign;
}

@property (nonatomic, retain) NSData *c411_content;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dq;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, retain) NSObject<OS_xpc_object> *im4m_array;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSError *nserr;
@property (nonatomic, retain) NSDictionary *response;
@property (nonatomic, retain) NSString *tssURL;
@property (nonatomic, readonly) NSString *tssUsage;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *tss_request;
@property (nonatomic, retain) NSObject<OS_cryptex_signature> *tssp_sign;

- (void).cxx_destruct;
- (void)activate;
- (id)c411_content;
- (id)dq;
- (unsigned long long)flags;
- (id)generateDiavloRequest:(id)arg1;
- (id)generatePackedSignatures;
- (id)im4m_array;
- (id)initWithFlags:(unsigned long long)arg1;
- (bool)isSSOAvailable;
- (id)log;
- (id)nserr;
- (id)response;
- (void)setC411_content:(id)arg1;
- (void)setIm4m_array:(id)arg1;
- (void)setInfoData:(id)arg1;
- (void)setManifestArray:(id)arg1;
- (void)setNserr:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setTssURL:(id)arg1;
- (void)setTssp_sign:(id)arg1;
- (void)setURL:(id)arg1;
- (id)tssFormatRequest:(id)arg1 withHeaders:(id)arg2 withURL:(id)arg3;
- (id)tssFormatResponse:(id)arg1 withHeaderData:(id)arg2 withCode:(long long)arg3;
- (int)tssSendRequest;
- (id)tssSerializeRequest;
- (void)tssStampRequest;
- (void)tssSubmit;
- (id)tssURL;
- (id)tssUsage;
- (id)tss_request;
- (id)tssp_sign;

@end
