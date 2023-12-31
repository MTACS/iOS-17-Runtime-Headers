
@interface SXFontAttributesConstructor : NSObject <SXFontAttributesConstructor> {
    <SXFontIndex> * _fontIndex;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <SXFontIndex> *fontIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)fontAttributesForFontDescriptions:(id)arg1;
- (id)fontFaceForAttributes:(id)arg1 size:(long long)arg2;
- (id)fontIndex;
- (id)fontNameForAttributes:(id)arg1 size:(long long)arg2;
- (id)initWithFontIndex:(id)arg1;
- (long long)weightByApplyingWeightLabels:(id)arg1 toWeight:(long long)arg2;

@end
