
@interface RWIProtocolConsoleChannel : RWIProtocolJSONObject

@property (nonatomic) long long level;
@property (nonatomic) long long source;

- (id)initWithSource:(long long)arg1 level:(long long)arg2;
- (long long)level;
- (void)setLevel:(long long)arg1;
- (void)setSource:(long long)arg1;
- (long long)source;

@end
