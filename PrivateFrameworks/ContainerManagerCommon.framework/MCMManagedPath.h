
@interface MCMManagedPath : NSObject <MCMManagedPath> {
    unsigned long long  _ACLConfig;
    int  _dpClass;
    unsigned long long  _flags;
    MCMFSNode * _fsNode;
    unsigned short  _mode;
    MCMPOSIXUser * _owner;
    <MCMManagedPath> * _parent;
    NSURL * _url;
}

@property (nonatomic, readonly) unsigned long long ACLConfig;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int dpClass;
@property (nonatomic, readonly) unsigned long long flags;
@property (nonatomic, retain) MCMFSNode *fsNode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned short mode;
@property (nonatomic, readonly) MCMPOSIXUser *owner;
@property (nonatomic, readonly) <MCMManagedPath> *parent;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (unsigned long long)ACLConfig;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (int)dpClass;
- (unsigned long long)flags;
- (id)fsNode;
- (unsigned long long)hash;
- (id)initWithURL:(id)arg1 flags:(unsigned long long)arg2 ACLConfig:(unsigned long long)arg3 mode:(unsigned short)arg4 dpClass:(int)arg5 owner:(id)arg6 parent:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToManagedPath:(id)arg1;
- (id)managedPathByAppendingPathComponent:(id)arg1 flags:(unsigned long long)arg2 ACLConfig:(unsigned long long)arg3 mode:(unsigned short)arg4 dpClass:(int)arg5 owner:(id)arg6;
- (unsigned short)mode;
- (id)owner;
- (id)parent;
- (void)setFsNode:(id)arg1;
- (id)url;

@end
