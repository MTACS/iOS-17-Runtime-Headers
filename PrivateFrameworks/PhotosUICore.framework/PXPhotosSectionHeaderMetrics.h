
@interface PXPhotosSectionHeaderMetrics : NSObject {
    double  _cachedHeights;
}

+ (id)sharedMetrics;

- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_invalidateCache;
- (double)accessibilitySectionHeaderHeightForStyle:(long long)arg1 width:(double)arg2 actionButton:(bool)arg3 disclosure:(bool)arg4 title:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 locations:(id)arg8 actionButtonSpec:(id)arg9;
- (id)init;
- (double)sectionHeaderHeightForStyle:(long long)arg1 hasTitle:(bool)arg2 hasDates:(bool)arg3 hasLocation:(bool)arg4;

@end
