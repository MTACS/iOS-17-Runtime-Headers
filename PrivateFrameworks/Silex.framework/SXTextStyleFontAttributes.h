
@interface SXTextStyleFontAttributes : SXJSONFontAttributes <SXTextStyleFontAttributes>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSNumber *grade;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long style;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long weight;
@property (nonatomic, readonly) unsigned long long weightLabel;
@property (nonatomic, readonly) long long width;

- (unsigned long long)weightLabelWithValue:(id)arg1 withType:(int)arg2;

@end
