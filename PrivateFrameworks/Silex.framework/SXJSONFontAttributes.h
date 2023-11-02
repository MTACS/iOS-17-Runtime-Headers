
@interface SXJSONFontAttributes : SXJSONObject <SXFontAttributes>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSString *fontFamily;
@property (nonatomic, readonly) NSNumber *grade;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long weight;
@property (nonatomic, readonly) long long width;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)familyNameWithValue:(id)arg1 withType:(int)arg2;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (long long)styleWithValue:(id)arg1 withType:(int)arg2;
- (long long)weightWithValue:(id)arg1 withType:(int)arg2;
- (long long)widthWithValue:(id)arg1 withType:(int)arg2;

@end
