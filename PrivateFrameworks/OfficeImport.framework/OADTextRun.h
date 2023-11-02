
@interface OADTextRun : NSObject {
    OADCharacterProperties * mProperties;
}

- (void).cxx_destruct;
- (unsigned long long)characterCount;
- (id)description;
- (id)init;
- (bool)isEmpty;
- (bool)isSimilarToTextRun:(id)arg1;
- (id)properties;
- (void)removeUnnecessaryOverrides;
- (void)setProperties:(id)arg1;

@end
