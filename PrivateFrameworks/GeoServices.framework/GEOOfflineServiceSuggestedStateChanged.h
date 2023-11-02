
@interface GEOOfflineServiceSuggestedStateChanged : GEOXPCRequest <GEOXPCRequest> {
    unsigned long long  _currentState;
}

@property (nonatomic) unsigned long long currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (unsigned long long)currentState;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (unsigned long long)reply;
- (void)setCurrentState:(unsigned long long)arg1;

@end
