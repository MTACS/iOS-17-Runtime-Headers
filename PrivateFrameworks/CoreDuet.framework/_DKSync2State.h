
@interface _DKSync2State : NSObject {
    NSMutableArray * _completions;
    bool  _isPending;
    _DKSyncCompositeOperation * _parent;
    _DKSyncType * _type;
}

- (void).cxx_destruct;

@end
