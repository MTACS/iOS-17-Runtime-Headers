
@interface MROriginClientPropertiesMessage : MRProtocolMessage

@property (nonatomic, readonly) NSDate *lastPlayingDate;

- (id)initWithLastPlayingDate:(id)arg1;
- (id)lastPlayingDate;
- (unsigned long long)type;

@end
