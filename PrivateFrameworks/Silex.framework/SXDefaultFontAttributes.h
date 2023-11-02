
@interface SXDefaultFontAttributes : NSObject <SXTextStyleFontAttributes>

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

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)familyName;
- (id)grade;
- (bool)isEqual:(id)arg1;
- (long long)style;
- (long long)weight;
- (unsigned long long)weightLabel;
- (long long)width;

@end
