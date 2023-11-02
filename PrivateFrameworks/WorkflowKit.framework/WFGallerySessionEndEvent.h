
@interface WFGallerySessionEndEvent : WFEvent {
    unsigned int  _duration;
    NSString * _key;
    NSString * _sessionIdentifier;
}

@property (nonatomic) unsigned int duration;
@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *sessionIdentifier;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (unsigned int)duration;
- (id)key;
- (id)sessionIdentifier;
- (void)setDuration:(unsigned int)arg1;
- (void)setKey:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;

@end
