
@interface SXListStyle : SXJSONObject

@property (nonatomic, readonly) NSString *character;
@property (nonatomic, readonly) unsigned long long depth;
@property (nonatomic, readonly) SXJSONArray *indices;
@property (nonatomic, readonly) unsigned long long style;

- (unsigned long long)styleWithValue:(id)arg1 withType:(int)arg2;

@end
