
@interface AlgosConnectionScore : NSObject {
    bool  _debug;
    void * connectionData;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic) bool debug;

+ (id)connectionScore;

- (void)addConnectionRow:(unsigned long long)arg1 ttfb:(double)arg2 ttlb:(double)arg3 basettfb:(double)arg4 basettlb:(double)arg5 weight:(double)arg6 failed:(int)arg7;
- (void)clearConnectionRows;
- (unsigned long long)count;
- (void)dealloc;
- (bool)debug;
- (id)init;
- (id)scoreConnection:(bool)arg1 label:(id)arg2;
- (void)setDebug:(bool)arg1;

@end
