
@interface _bmFMStatement : NSObject {
    bool  _inUse;
    NSString * _query;
    void * _statement;
    long long  _useCount;
}

@property bool inUse;
@property (retain) NSString *query;
@property void*statement;
@property long long useCount;

- (void).cxx_destruct;
- (void)close;
- (void)dealloc;
- (id)description;
- (bool)inUse;
- (id)query;
- (void)reset;
- (void)setInUse:(bool)arg1;
- (void)setQuery:(id)arg1;
- (void)setStatement:(void*)arg1;
- (void)setUseCount:(long long)arg1;
- (void*)statement;
- (long long)useCount;

@end
