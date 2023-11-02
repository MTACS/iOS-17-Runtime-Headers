
@interface wspConnectIn : NSObject {
    unsigned int  _cExtPropSet;
    unsigned int  _cPropSets;
    unsigned int  _cbBlob2;
    unsigned int  _clientIsRemote;
    NSString * _clientMachineName;
    unsigned int  _clientVersion;
    wspPropertySet * _coreFrameworkSet;
    wspPropertySet * _coreFrameworkSet2;
    wspPropertySet * _fsciFrameworkSet1;
    wspPropertySet * _fsciFrameworkSet2;
    wspPropertySet * _msidxsRowSetSet;
    wspPropertySet * _queryExtSet;
    NSString * _serverMachineName;
    NSString * _userName;
    struct { 
        unsigned int msgid; 
        unsigned int status; 
        unsigned int checksum; 
        unsigned int reserved2; 
    }  msghdr;
}

@property unsigned int cExtPropSet;
@property unsigned int cPropSets;
@property unsigned int cbBlob2;
@property unsigned int clientIsRemote;
@property (retain) NSString *clientMachineName;
@property unsigned int clientVersion;
@property (retain) wspPropertySet *coreFrameworkSet;
@property (retain) wspPropertySet *coreFrameworkSet2;
@property (retain) wspPropertySet *fsciFrameworkSet1;
@property (retain) wspPropertySet *fsciFrameworkSet2;
@property (retain) wspPropertySet *msidxsRowSetSet;
@property (retain) wspPropertySet *queryExtSet;
@property (retain) NSString *serverMachineName;
@property (retain) NSString *userName;

- (void).cxx_destruct;
- (unsigned int)cExtPropSet;
- (unsigned int)cPropSets;
- (unsigned int)cbBlob2;
- (unsigned int)clientIsRemote;
- (id)clientMachineName;
- (unsigned int)clientVersion;
- (id)coreFrameworkSet;
- (id)coreFrameworkSet2;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int*)arg3;
- (id)fsciFrameworkSet1;
- (id)fsciFrameworkSet2;
- (id)initWithCtx:(id)arg1 EnableRowSetEvents:(bool)arg2 NoExpensiveProps:(bool)arg3 UseExtendedBTypes:(bool)arg4;
- (id)msidxsRowSetSet;
- (id)queryExtSet;
- (id)serverMachineName;
- (void)setCExtPropSet:(unsigned int)arg1;
- (void)setCPropSets:(unsigned int)arg1;
- (void)setCbBlob2:(unsigned int)arg1;
- (void)setClientIsRemote:(unsigned int)arg1;
- (void)setClientMachineName:(id)arg1;
- (void)setClientVersion:(unsigned int)arg1;
- (void)setCoreFrameworkSet2:(id)arg1;
- (void)setCoreFrameworkSet:(id)arg1;
- (void)setFsciFrameworkSet1:(id)arg1;
- (void)setFsciFrameworkSet2:(id)arg1;
- (void)setMsidxsRowSetSet:(id)arg1;
- (void)setQueryExtSet:(id)arg1;
- (void)setServerMachineName:(id)arg1;
- (void)setUserName:(id)arg1;
- (id)userName;

@end
