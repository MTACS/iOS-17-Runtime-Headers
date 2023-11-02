
@interface PREditingLookProperties : NSObject <BSDescriptionStreamable, NSCopying, NSMutableCopying>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) PRTimeFontConfiguration *timeFontConfiguration;
@property (nonatomic, readonly, copy) PRPosterColor *titlePosterColor;

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)appendDescriptionToFormatter:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithProperties:(id)arg1;
- (id)initWithTimeFontConfiguration:(id)arg1 titlePosterColor:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

@end
