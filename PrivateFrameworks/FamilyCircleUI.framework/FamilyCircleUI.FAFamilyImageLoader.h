
@interface FamilyCircleUI.FAFamilyImageLoader : NSObject {
    void authResults;
    void imageProvider;
    void loaders;
    void monogramDiameter;
}

@property (nonatomic, copy) NSDictionary *authResults;

+ (id)shared;

- (void).cxx_destruct;
- (id)authResults;
- (id)init;
- (void)setAuthResults:(id)arg1;

@end
