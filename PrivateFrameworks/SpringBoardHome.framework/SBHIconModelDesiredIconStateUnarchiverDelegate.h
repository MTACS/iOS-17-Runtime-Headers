
@interface SBHIconModelDesiredIconStateUnarchiverDelegate : NSObject <SBHIconStateUnarchiverDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct SBHIconGridSizeClassSizes { struct SBHIconGridSize { unsigned short x_1_1_1; unsigned short x_1_1_2; } x1; struct SBHIconGridSize { unsigned short x_2_1_1; unsigned short x_2_1_2; } x2; struct SBHIconGridSize { unsigned short x_3_1_1; unsigned short x_3_1_2; } x3; struct SBHIconGridSize { unsigned short x_4_1_1; unsigned short x_4_1_2; } x4; struct SBHIconGridSize { unsigned short x_5_1_1; unsigned short x_5_1_2; } x5; })gridSizeClassSizesForIconStateUnarchiver:(id)arg1;
- (unsigned long long)iconModel:(id)arg1 allowedGridSizeClassesForFolderClass:(Class)arg2;
- (struct SBHIconGridSize { unsigned short x1; unsigned short x2; })iconStateUnarchiver:(id)arg1 listGridSizeForFolderClass:(Class)arg2;
- (unsigned long long)maxIconCountForDockForIconStateUnarchiver:(id)arg1;
- (unsigned long long)maxListCountForFoldersForIconStateUnarchiver:(id)arg1;

@end
