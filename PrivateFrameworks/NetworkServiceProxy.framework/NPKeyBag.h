
@interface NPKeyBag : NSObject {
    long long  _TFOStatusOverride;
    long long  _fallbackReason;
    unsigned int  _generation;
    unsigned int  _index;
    NSArray * _keys;
    double  _lastUsedTimestamp;
    NSArray * _onRampList;
    NSDictionary * _onRampMap;
    NSData * _updateHash;
    NSPredicate * _validOnRampPredicate;
    NSPredicate * _validOnRampWithTFOPredicate;
}

@property (nonatomic) long long TFOStatusOverride;
@property long long fallbackReason;
@property (nonatomic) unsigned int generation;
@property unsigned int index;
@property (nonatomic, retain) NSArray *keys;
@property (nonatomic) double lastUsedTimestamp;
@property (retain) NSArray *onRampList;
@property (retain) NSDictionary *onRampMap;
@property (readonly) double timeSinceLastUsed;
@property (nonatomic, retain) NSData *updateHash;
@property (retain) NSPredicate *validOnRampPredicate;
@property (retain) NSPredicate *validOnRampWithTFOPredicate;

- (void).cxx_destruct;
- (long long)TFOStatusOverride;
- (id)copyUsableOnRamps:(bool)arg1 requireTFO:(bool)arg2;
- (void)createOnRamps;
- (id)data;
- (long long)fallbackReason;
- (unsigned int)generation;
- (id)getOnRampForEndpoint:(id)arg1;
- (unsigned int)index;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithOnRamps:(id)arg1 currentNetworkInfo:(id)arg2 currentEdgeIndex:(long long)arg3 currentEdgeList:(id)arg4 generation:(unsigned int)arg5 identifier:(id)arg6 updateHash:(id)arg7;
- (id)keys;
- (double)lastUsedTimestamp;
- (void)logWithMessage:(id)arg1 identifier:(id)arg2;
- (void)moveToNextOnRamp;
- (void)moveToOnRamp:(id)arg1;
- (id)onRampList;
- (id)onRampMap;
- (void)removeIPv6Keys;
- (void)setFallbackReason:(long long)arg1;
- (void)setGeneration:(unsigned int)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setKeys:(id)arg1;
- (void)setLastUsedTimestamp:(double)arg1;
- (void)setOnRampList:(id)arg1;
- (void)setOnRampMap:(id)arg1;
- (void)setTFOStatusOverride:(long long)arg1;
- (void)setUpdateHash:(id)arg1;
- (void)setValidOnRampPredicate:(id)arg1;
- (void)setValidOnRampWithTFOPredicate:(id)arg1;
- (double)timeSinceLastUsed;
- (id)updateHash;
- (bool)updateHashMatchesEdgeSet:(id)arg1;
- (id)validOnRampPredicate;
- (id)validOnRampWithTFOPredicate;

@end
