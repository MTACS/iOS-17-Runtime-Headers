
@interface MRUpdateContentItemMessage : MRProtocolMessage

@property (nonatomic, readonly) NSArray *contentItems;
@property (nonatomic, readonly) MRPlayerPath *playerPath;

- (id)contentItems;
- (id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2 encoding:(long long)arg3;
- (id)playerPath;
- (unsigned long long)type;

@end
