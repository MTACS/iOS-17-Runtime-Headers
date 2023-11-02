
@interface ECTagValueList : NSObject {
    NSDictionary * _dictionaryRepresentation;
    struct EFAtomicObject { 
        _Atomic long long cfObject; 
    }  _stringRepresentation;
}

@property (nonatomic, readonly, copy) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *stringRepresentation;

+ (id)tagValueListFromDictionary:(id)arg1 error:(id*)arg2;
+ (id)tagValueListFromString:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)_initWithDictionaryRepresentation:(id)arg1;
- (id)_initWithDictionaryRepresentation:(id)arg1 stringRepresentation:(id)arg2;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)stringRepresentation;
- (id)valueForTag:(id)arg1;

@end
