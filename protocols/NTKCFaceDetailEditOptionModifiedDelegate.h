
@protocol NTKCFaceDetailEditOptionModifiedDelegate <NTKCFaceDetailEditOptionSectionDelegate>

@required

- (void)editOptionSection:(NTKCFaceDetailEditOptionSectionController *)arg1 didModifyEditOption:(NTKEditOption *)arg2 transiently:(bool)arg3 canceled:(bool)arg4;

@end
