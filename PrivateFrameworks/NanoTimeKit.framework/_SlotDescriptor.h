
@interface _SlotDescriptor : NSObject {
    NSArray * _familiesRankedList;
    NSIndexSet * _possibleTypes;
    NSArray * _typesRankedList;
}

@property (nonatomic, readonly) NSArray *familiesRankedList;
@property (nonatomic, readonly) NSIndexSet *possibleTypes;
@property (nonatomic, readonly) NSArray *typesRankedList;

+ (id)descriptorWithComplicationFamilies:(id)arg1 complicationTypesRankedList:(id)arg2 allowedComplicationTypes:(id)arg3;

- (void).cxx_destruct;
- (bool)allowsFamily:(long long)arg1 inFace:(id)arg2;
- (bool)allowsType:(unsigned long long)arg1 inFace:(id)arg2;
- (void)enumerateAllowedFamiliesForFace:(id)arg1 withBlock:(id /* block */)arg2;
- (id)familiesRankedList;
- (id)possibleTypes;
- (bool)supportsFamiliesOfComplications:(id)arg1 inFace:(id)arg2;
- (bool)supportsType:(unsigned long long)arg1;
- (id)typesRankedList;

@end
