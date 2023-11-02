
@interface MFDARequestQueue : MFRequestQueue {
    DAMailAccount * _account;
    NSString * _folderID;
}

- (void).cxx_destruct;
- (id)filterRequests:(id)arg1;
- (id)initWithAccount:(id)arg1 folderID:(id)arg2;
- (bool)processRequests:(id)arg1;

@end
