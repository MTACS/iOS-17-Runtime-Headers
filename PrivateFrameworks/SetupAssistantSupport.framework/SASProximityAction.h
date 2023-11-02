
@interface SASProximityAction : NSObject

+ (id)actionFromDictionary:(id)arg1;
+ (unsigned long long)actionID;

- (bool)hasResponse;
- (id)requestPayload;
- (id)responsePayload;
- (void)setResponseFromData:(id)arg1;

@end
