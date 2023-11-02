
@interface WFWeatherChannelValidator : NSObject

+ (id)expectedStructure;
+ (bool)isLeafNodeType:(id)arg1;

- (bool)validateDictionary:(id)arg1 expectedStructure:(id)arg2;
- (bool)validateResponseData:(id)arg1;

@end
