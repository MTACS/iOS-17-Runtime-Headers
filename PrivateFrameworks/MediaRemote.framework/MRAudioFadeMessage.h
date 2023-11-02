
@interface MRAudioFadeMessage : MRProtocolMessage

@property (nonatomic, readonly) long long fadeType;
@property (nonatomic, readonly) MRPlayerPath *playerPath;

- (long long)fadeType;
- (id)initWithPlayerPath:(id)arg1 fadeType:(long long)arg2;
- (id)playerPath;
- (unsigned long long)type;

@end
