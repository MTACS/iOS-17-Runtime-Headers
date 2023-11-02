
@interface ALSCGreenClient : NSObject {
    bool  _cachingAllowed;
    bool  _key1Value;
    bool  _key2Value;
    bool  _key3Value;
}

@property (nonatomic) bool key1Value;
@property (nonatomic) bool key2Value;
@property (nonatomic) bool key3Value;
@property (nonatomic, readonly) bool valuesFinalized;

- (bool)_attemptReadingValuesFromDiskAndUpdateFileState;
- (bool)_readGreenKeysFromDictionary:(id)arg1;
- (id)init;
- (bool)key1Value;
- (bool)key2Value;
- (bool)key3Value;
- (void)setKey1Value:(bool)arg1;
- (void)setKey2Value:(bool)arg1;
- (void)setKey3Value:(bool)arg1;
- (bool)valuesFinalized;

@end
