
@interface TITestUserPersona : NSObject {
    NSMutableDictionary * _cachedKeyInfo;
    UIKBTree * _currentKeyplane;
    NSMutableDictionary * _keyInfo;
    NSDictionary * _personaData;
}

@property (nonatomic, retain) NSMutableDictionary *cachedKeyInfo;
@property (nonatomic, retain) UIKBTree *currentKeyplane;
@property (nonatomic) NSMutableDictionary *keyInfo;
@property (nonatomic, retain) NSDictionary *personaData;

- (void).cxx_destruct;
- (id)cachedKeyInfo;
- (id)currentKeyplane;
- (id)initWithPersonaName:(id)arg1;
- (id)keyInfo;
- (id)personaData;
- (void)setCachedKeyInfo:(id)arg1;
- (void)setCurrentKeyplane:(id)arg1;
- (void)setKeyInfo:(id)arg1;
- (void)setPersonaData:(id)arg1;
- (void)updateFromKeyplane:(id)arg1;
- (struct CGPoint { double x1; double x2; })userPointForKey:(id)arg1;

@end
