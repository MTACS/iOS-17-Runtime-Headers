
@interface GEOOfflineServiceStateSubscribeReply : GEOXPCReply <GEOXPCReply> {
    unsigned long long  _currentState;
    unsigned long long  _currentSuggestedState;
    unsigned long long  _savedState;
}

@property (nonatomic) unsigned long long currentState;
@property (nonatomic) unsigned long long currentSuggestedState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long savedState;
@property (readonly) Class superclass;

- (unsigned long long)currentState;
- (unsigned long long)currentSuggestedState;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)savedState;
- (void)setCurrentState:(unsigned long long)arg1;
- (void)setCurrentSuggestedState:(unsigned long long)arg1;
- (void)setSavedState:(unsigned long long)arg1;

@end
