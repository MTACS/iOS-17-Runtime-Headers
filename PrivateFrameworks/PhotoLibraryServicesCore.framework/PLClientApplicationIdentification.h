
@interface PLClientApplicationIdentification : NSObject <PLClientIdentification> {
    struct { 
        unsigned int val[8]; 
    }  _clientAuditToken;
    int  _clientProcessIdentifier;
    NSString * _trustedCallerBundleID;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } clientAuditToken;
@property (nonatomic, readonly) int clientProcessIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *trustedCallerBundleID;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })clientAuditToken;
- (int)clientProcessIdentifier;
- (id)initWithConnection:(id)arg1;
- (id)trustedCallerBundleID;

@end
