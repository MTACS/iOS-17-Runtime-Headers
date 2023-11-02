
@interface SXSanFranciscoFontFamily : NSObject <SXFontFamily>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *familyName;
@property (nonatomic, readonly) NSSet *fontFaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)familyName;
- (id)fontFaceWithAttributes:(id)arg1 size:(long long)arg2;
- (id)fontFaces;

@end
