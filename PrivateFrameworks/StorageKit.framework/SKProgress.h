
@interface SKProgress : NSProgress {
    NSMutableArray * _children;
}

@property (nonatomic, readonly) NSMutableArray *children;

+ (id)progressWithTotalUnitCount:(long long)arg1;

- (void).cxx_destruct;
- (void)chainChildProgress:(id)arg1 withPendingUnitCount:(long long)arg2;
- (id)children;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
