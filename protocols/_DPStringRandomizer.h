
@protocol _DPStringRandomizer <NSObject>

@required

- (NSArray *)randomizeBitValues:(NSArray *)arg1 forKey:(NSString *)arg2;
- (NSArray *)randomizeStrings:(NSArray *)arg1 forKey:(NSString *)arg2;
- (NSArray *)randomizeWords:(NSArray *)arg1 fragmentWidth:(unsigned long long)arg2 forKey:(NSString *)arg3;

@optional

- (NSArray *)randomizeBitValues:(NSArray *)arg1 metadata:(NSDictionary *)arg2 forKey:(NSString *)arg3;
- (NSArray *)randomizeBitVectors:(NSArray *)arg1 forKey:(NSString *)arg2;
- (NSArray *)randomizeBitVectors:(NSArray *)arg1 metadata:(NSDictionary *)arg2 forKey:(NSString *)arg3;
- (NSArray *)randomizeFloatVectors:(NSArray *)arg1 forKey:(NSString *)arg2;
- (NSArray *)randomizeFloatVectors:(NSArray *)arg1 metadata:(NSDictionary *)arg2 forKey:(NSString *)arg3;
- (NSArray *)randomizeNumbers:(NSArray *)arg1 forKey:(NSString *)arg2;
- (NSArray *)randomizeNumbers:(NSArray *)arg1 metadata:(NSDictionary *)arg2 forKey:(NSString *)arg3;
- (NSArray *)randomizeNumbersVectors:(NSArray *)arg1 forKey:(NSString *)arg2;
- (NSArray *)randomizeNumbersVectors:(NSArray *)arg1 metadata:(NSDictionary *)arg2 forKey:(NSString *)arg3;
- (NSArray *)randomizeStrings:(NSArray *)arg1 metadata:(NSDictionary *)arg2 forKey:(NSString *)arg3;

@end
