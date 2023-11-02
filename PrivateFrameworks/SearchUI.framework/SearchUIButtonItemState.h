
@interface SearchUIButtonItemState : NSObject {
    NSNumber * _cachedStateValue;
    SFCommand * _command;
    bool  _isPossiblyAvailable;
}

@property (nonatomic, retain) NSNumber *cachedStateValue;
@property (nonatomic, retain) SFCommand *command;
@property (nonatomic) bool isPossiblyAvailable;

+ (id)stateObjectForCommand:(id)arg1;

- (void).cxx_destruct;
- (id)cachedStateValue;
- (void)checkIfAvailable:(id /* block */)arg1;
- (id)command;
- (bool)isPossiblyAvailable;
- (void)setCachedStateValue:(id)arg1;
- (void)setCommand:(id)arg1;
- (void)setIsPossiblyAvailable:(bool)arg1;

@end
