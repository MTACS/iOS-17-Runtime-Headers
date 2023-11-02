
@interface _GCHapticTokenAndParams : NSObject {
    NSMutableArray * _params;
    unsigned long long  _token;
}

@property (nonatomic, retain) NSMutableArray *params;
@property (nonatomic, readonly) unsigned long long token;

- (void).cxx_destruct;
- (id)initWithHapticCommand:(const void*)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (unsigned long long)token;

@end
