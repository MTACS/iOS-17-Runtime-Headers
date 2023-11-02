
@interface _SFCommandRecognizerArgument : NSObject {
    NSIndexSet * _adpositionIndexes;
    NSIndexSet * _indexes;
    BOOL  _presence;
}

@property (nonatomic, readonly, copy) NSIndexSet *adpositionIndexes;
@property (nonatomic, readonly, copy) NSIndexSet *indexes;
@property (nonatomic, readonly) BOOL presence;

- (void).cxx_destruct;
- (id)adpositionIndexes;
- (id)indexes;
- (id)initWithPresence:(BOOL)arg1 indexes:(id)arg2 adpositionIndexes:(id)arg3;
- (BOOL)presence;

@end
