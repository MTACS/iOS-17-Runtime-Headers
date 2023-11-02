
@interface CLKClockTimerToken : NSObject {
    id /* block */  _handler;
    NSNumber * _id;
    bool  _isActive;
    id /* block */  _log;
    CLKClockTimer * _owner;
    long long  _updateFrequency;
    bool  _wantsCommit;
    bool  _wantsHighAccuracy;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) bool isActive;
@property (nonatomic, copy) id /* block */ log;
@property (nonatomic) CLKClockTimer *owner;
@property (nonatomic) long long updateFrequency;
@property (nonatomic) bool wantsCommit;
@property (nonatomic) bool wantsHighAccuracy;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id /* block */)handler;
- (unsigned long long)hash;
- (id)initWithID:(long long)arg1;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (id /* block */)log;
- (id)owner;
- (void)setHandler:(id /* block */)arg1;
- (void)setIsActive:(bool)arg1;
- (void)setLog:(id /* block */)arg1;
- (void)setOwner:(id)arg1;
- (void)setUpdateFrequency:(long long)arg1;
- (void)setWantsCommit:(bool)arg1;
- (void)setWantsHighAccuracy:(bool)arg1;
- (long long)updateFrequency;
- (bool)wantsCommit;
- (bool)wantsHighAccuracy;

@end
