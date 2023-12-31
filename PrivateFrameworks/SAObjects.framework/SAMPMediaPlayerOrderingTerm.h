
@interface SAMPMediaPlayerOrderingTerm : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *mediaPlayerOrderingDirection;
@property (nonatomic) int mediaPlayerSearchProperty;
@property (readonly) Class superclass;

+ (id)mediaPlayerOrderingTerm;
+ (id)mediaPlayerOrderingTermWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mediaPlayerOrderingDirection;
- (int)mediaPlayerSearchProperty;
- (void)setMediaPlayerOrderingDirection:(id)arg1;
- (void)setMediaPlayerSearchProperty:(int)arg1;

@end
