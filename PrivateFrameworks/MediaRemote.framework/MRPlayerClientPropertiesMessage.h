
@interface MRPlayerClientPropertiesMessage : MRProtocolMessage

@property (nonatomic, readonly) NSDate *lastPlayingDate;
@property (nonatomic, readonly) MRPlayerPath *playerPath;

- (id)initWithPlayerPath:(id)arg1 lastPlayingDate:(id)arg2;
- (id)lastPlayingDate;
- (id)playerPath;
- (unsigned long long)type;

@end
