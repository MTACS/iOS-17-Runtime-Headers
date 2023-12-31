
@interface BCSGenericDataParser : NSObject <BCSDataParser>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_parsedDataFromDDResult:(struct __DDResult { }*)arg1 decodedString:(id)arg2;
+ (id)parseString:(id)arg1;

@end
