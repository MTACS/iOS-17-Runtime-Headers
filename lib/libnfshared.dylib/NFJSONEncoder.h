
@interface NFJSONEncoder : NSObject

+ (id)encoder;

- (id)_JSONCompatibleArray:(id)arg1;
- (id)_JSONCompatibleDictionary:(id)arg1;
- (id)stringFromArray:(id)arg1;
- (id)stringFromDictionary:(id)arg1;

@end
