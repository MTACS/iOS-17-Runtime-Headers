
@interface VUIPlayerValidationManager : NSObject {
    NSMapTable * _playerCounts;
}

@property (nonatomic, retain) NSMapTable *playerCounts;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (void)addReferenceForPlayer:(id)arg1;
- (id)init;
- (id)playerCounts;
- (void)removeReferenceForPlayer:(id)arg1;
- (void)setPlayerCounts:(id)arg1;

@end
