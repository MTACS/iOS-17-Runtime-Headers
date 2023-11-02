
@protocol _SFPBSportsTeam <NSObject>

@required

- (NSString *)accessibilityDescription;
- (_SFPBButtonItem *)button;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (bool)isWinner;
- (NSData *)jsonData;
- (_SFPBImage *)logo;
- (NSString *)name;
- (NSString *)record;
- (NSString *)score;
- (void)setAccessibilityDescription:(NSString *)arg1;
- (void)setButton:(_SFPBButtonItem *)arg1;
- (void)setIsWinner:(bool)arg1;
- (void)setLogo:(_SFPBImage *)arg1;
- (void)setName:(NSString *)arg1;
- (void)setRecord:(NSString *)arg1;
- (void)setScore:(NSString *)arg1;

@end
