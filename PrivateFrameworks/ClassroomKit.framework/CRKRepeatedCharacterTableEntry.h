
@interface CRKRepeatedCharacterTableEntry : NSObject <CRKTableEntry> {
    BOOL  mCharacter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)initWithCharacter:(BOOL)arg1;
- (id)rawStringValue;
- (id)stringValueWithLength:(unsigned long long)arg1;

@end
