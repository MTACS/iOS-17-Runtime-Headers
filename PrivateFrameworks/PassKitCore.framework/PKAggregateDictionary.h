
@interface PKAggregateDictionary : NSObject <PKAggregateDictionaryProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedDictionary;

- (void)addValueForScalarKey:(id)arg1 value:(long long)arg2;

@end
