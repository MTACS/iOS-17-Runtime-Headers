
@interface MRUpdatePlayerMessage : MRProtocolMessage

@property (nonatomic, readonly) MRPlayerPath *playerPath;

- (id)initWithPlayerPath:(id)arg1;
- (id)playerPath;
- (unsigned long long)type;

@end
