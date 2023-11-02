
@interface PUSuggestLessPersonActivity : PXActivity {
    NSString * _cachedImageName;
}

+ (long long)_activityStyle;
+ (long long)activityCategory;

- (void).cxx_destruct;
- (id)_facesInCurrentAsset;
- (id)_personFromFace:(id)arg1;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)performActivity;

@end
