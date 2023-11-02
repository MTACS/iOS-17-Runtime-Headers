
@interface VUIUpNextConfig : NSObject {
    bool  _shouldUpdateOutboundAfterRemoveFromUpNext;
    unsigned long long  _upNextCallDelayAfterMarkAsWatched;
    unsigned long long  _upNextRefreshCallDelayAfterRemoveFromUpNext;
}

@property (nonatomic) bool shouldUpdateOutboundAfterRemoveFromUpNext;
@property (nonatomic) unsigned long long upNextCallDelayAfterMarkAsWatched;
@property (nonatomic) unsigned long long upNextRefreshCallDelayAfterRemoveFromUpNext;

- (id)init;
- (void)setShouldUpdateOutboundAfterRemoveFromUpNext:(bool)arg1;
- (void)setUpNextCallDelayAfterMarkAsWatched:(unsigned long long)arg1;
- (void)setUpNextRefreshCallDelayAfterRemoveFromUpNext:(unsigned long long)arg1;
- (bool)shouldUpdateOutboundAfterRemoveFromUpNext;
- (unsigned long long)upNextCallDelayAfterMarkAsWatched;
- (unsigned long long)upNextRefreshCallDelayAfterRemoveFromUpNext;

@end
