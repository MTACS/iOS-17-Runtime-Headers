
@interface WFGallerySessionSearchEvent : WFEvent {
    NSString * _key;
    NSString * _sessionIdentifier;
}

@property (nonatomic, copy) NSString *key;
@property (nonatomic, copy) NSString *sessionIdentifier;

+ (Class)codableEventClass;

- (void).cxx_destruct;
- (id)key;
- (id)sessionIdentifier;
- (void)setKey:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;

@end
