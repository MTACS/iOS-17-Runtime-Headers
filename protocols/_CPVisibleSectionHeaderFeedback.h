
@protocol _CPVisibleSectionHeaderFeedback <NSObject>

@required

- (int)headerType;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSString *)sectionId;
- (void)setHeaderType:(int)arg1;
- (void)setSectionId:(NSString *)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;

@end
