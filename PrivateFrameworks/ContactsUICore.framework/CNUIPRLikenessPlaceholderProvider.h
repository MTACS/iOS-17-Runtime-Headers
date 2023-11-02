
@interface CNUIPRLikenessPlaceholderProvider : NSObject <CNUIPRLikenessProvider> {
    CNCache * _cache;
    bool  _isForCompany;
}

@property (nonatomic, readonly) CNCache *cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isForCompany;
@property (readonly) Class superclass;

+ (id)companyImageNameForDiameter:(double)arg1;
+ (id)imageNameForDiameter:(double)arg1;

- (void).cxx_destruct;
- (struct CGImage { }*)_cnui_circularImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)_cnui_likenessForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (unsigned long long)_cnui_likenessType;
- (struct CGImage { }*)_cnui_roundedRectImageForSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2;
- (id)cache;
- (id)init;
- (id)initWithContact:(id)arg1;
- (bool)isForCompany;
- (struct CGImage { }*)renderCircularImageForSilhouetteImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (struct CGImage { }*)renderRoundedRectImageForSilhouetteImage:(struct CGImage { }*)arg1 size:(struct CGSize { double x1; double x2; })arg2 scale:(double)arg3;
- (void)setIsForCompany:(bool)arg1;

@end
