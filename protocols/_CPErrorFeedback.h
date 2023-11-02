
@protocol _CPErrorFeedback <NSObject>

@required

- (_CPError *)error;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)relatedStartNetworkSearchFeedbackId;
- (void)setError:(_CPError *)arg1;
- (void)setRelatedStartNetworkSearchFeedbackId:(NSString *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setUnderlyingError:(_CPError *)arg1;
- (unsigned long long)timestamp;
- (_CPError *)underlyingError;

@end
