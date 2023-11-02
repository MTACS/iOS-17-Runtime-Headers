
@protocol AAFSerializer

@required

- (NSData *)dataFromDictionary:(NSDictionary *)arg1;
- (NSData *)dataFromDictionary:(NSDictionary *)arg1 error:(out id*)arg2;
- (NSDictionary *)dictionaryFromObject:(id)arg1;
- (NSDictionary *)dictionaryFromObject:(id)arg1 error:(out id*)arg2;
- (NSArray *)mediaTypes;
- (NSString *)stringFromData:(NSData *)arg1;
- (NSString *)stringFromDictionary:(NSDictionary *)arg1;

@end
