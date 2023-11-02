
@protocol SFSportsTeam <NSObject>

@required

- (NSString *)accessibilityDescription;
- (SFButtonItem *)button;
- (NSDictionary *)dictionaryRepresentation;
- (bool)isWinner;
- (NSData *)jsonData;
- (SFImage *)logo;
- (NSString *)name;
- (NSString *)record;
- (NSString *)score;
- (void)setAccessibilityDescription:(NSString *)arg1;
- (void)setButton:(SFButtonItem *)arg1;
- (void)setIsWinner:(bool)arg1;
- (void)setLogo:(SFImage *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setRecord:(NSString *)arg1;
- (void)setScore:(NSString *)arg1;

@end
