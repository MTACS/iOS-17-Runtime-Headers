
@protocol SBFolderIconGridCellImageProvider <NSObject>

@required

- (UIImage *)gridCellImageOfSize:(struct CGSize { double x1; double x2; })arg1 forIcon:(SBIcon *)arg2 iconImageInfo:(struct SBIconImageInfo { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; })arg3;

@optional

- (bool)shouldSkipGridCellImageForIcon:(SBIcon *)arg1;

@end
