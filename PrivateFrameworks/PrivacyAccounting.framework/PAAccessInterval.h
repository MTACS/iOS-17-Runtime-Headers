
@interface PAAccessInterval : NSObject <PAAssetIdentifierPoolDelegate> {
    PAAccessLogger * _logger;
    NSNumber * _slot;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _wasEnded;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *slot;
@property (readonly) Class superclass;

+ (id)placeholderAccessInterval;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)end;
- (void)endWithTimestampAdjustment:(double)arg1;
- (id)initWithLogger:(id)arg1 slot:(id)arg2;
- (void)recordAccessToAssetIdentifiers:(id)arg1 withVisibilityState:(long long)arg2 accessEventCount:(unsigned long long)arg3;
- (id)slot;

@end
