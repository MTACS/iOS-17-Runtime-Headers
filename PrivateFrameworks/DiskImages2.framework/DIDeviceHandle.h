
@interface DIDeviceHandle : NSObject <NSCoding, NSSecureCoding> {
    NSString * _BSDName;
    DIClient2IODaemonXPCHandler * _client2IOhandler;
    bool  _handleRefCount;
    unsigned long long  _regEntryID;
    NSXPCListenerEndpoint * _xpcEndpoint;
}

@property (copy) NSString *BSDName;
@property (nonatomic, retain) DIClient2IODaemonXPCHandler *client2IOhandler;
@property (nonatomic) bool handleRefCount;
@property (nonatomic, readonly) unsigned long long regEntryID;
@property (nonatomic, retain) NSXPCListenerEndpoint *xpcEndpoint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)BSDName;
- (bool)addToRefCountWithError:(id*)arg1;
- (id)client2IOhandler;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)handleRefCount;
- (id)initWithCoder:(id)arg1;
- (id)initWithRegEntryID:(unsigned long long)arg1;
- (id)initWithRegEntryID:(unsigned long long)arg1 xpcEndpoint:(id)arg2;
- (unsigned long long)regEntryID;
- (void)setBSDName:(id)arg1;
- (void)setClient2IOhandler:(id)arg1;
- (void)setHandleRefCount:(bool)arg1;
- (void)setXpcEndpoint:(id)arg1;
- (bool)updateBSDNameWithBlockDevice:(id)arg1 error:(id*)arg2;
- (bool)waitForDeviceWithError:(id*)arg1;
- (bool)waitForQuietWithService:(unsigned int)arg1 error:(id*)arg2;
- (id)xpcEndpoint;

@end
