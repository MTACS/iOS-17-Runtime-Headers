
@interface SXEmbedResource : SXResource <SXEmbedResource>

@property (nonatomic, readonly) NSString *HTML;
@property (nonatomic, readonly) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

- (id)expirationDateWithValue:(id)arg1 withType:(int)arg2;

@end
