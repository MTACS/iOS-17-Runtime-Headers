
@interface GEOReportedProgress : NSObject {
    id /* block */  _cancellationHandler;
    NSProgress * _internalProgress;
    geo_isolater * _isolater;
    NSProgress * _progress;
}

@property (copy) id /* block */ cancellationHandler;
@property (getter=isCancelled, readonly) bool cancelled;
@property long long completedUnitCount;
@property (copy) NSString *kind;
@property (nonatomic, readonly) NSProgress *progress;
@property long long totalUnitCount;

+ (id)progressWithTotalUnitCount:(long long)arg1;

- (void).cxx_destruct;
- (void)addChild:(id)arg1 withPendingUnitCount:(long long)arg2;
- (void)becomeCurrentWithPendingUnitCount:(long long)arg1;
- (void)cancel;
- (id /* block */)cancellationHandler;
- (long long)completedUnitCount;
- (id)initWithTotalUnitCount:(long long)arg1;
- (bool)isCancelled;
- (id)kind;
- (id)progress;
- (void)resignCurrent;
- (void)setCancellationHandler:(id /* block */)arg1;
- (void)setCompletedUnitCount:(long long)arg1;
- (void)setKind:(id)arg1;
- (void)setTotalUnitCount:(long long)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (long long)totalUnitCount;

@end
