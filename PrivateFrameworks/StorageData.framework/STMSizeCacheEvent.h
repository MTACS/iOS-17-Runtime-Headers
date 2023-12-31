
@interface STMSizeCacheEvent : NSObject {
    unsigned long long  _evtID;
    unsigned int  _flags;
    NSString * _path;
}

@property unsigned long long evtID;
@property unsigned int flags;
@property (retain) NSString *path;

+ (id)eventWithPath:(id)arg1 flags:(unsigned int)arg2 event:(unsigned long long)arg3;

- (void).cxx_destruct;
- (long long)eventIDCompare:(id)arg1;
- (unsigned long long)evtID;
- (unsigned int)flags;
- (id)path;
- (void)setEvtID:(unsigned long long)arg1;
- (void)setFlags:(unsigned int)arg1;
- (void)setPath:(id)arg1;

@end
