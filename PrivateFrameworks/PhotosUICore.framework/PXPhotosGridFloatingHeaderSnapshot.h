
@interface PXPhotosGridFloatingHeaderSnapshot : NSObject <PXPhotosGridFloatingHeaderInfo> {
    PXAssetCollectionReference * _assetCollectionReference;
    unsigned long long  _buttonActionType;
    NSString * _buttonTitle;
    NSAttributedString * _subtitle;
    NSAttributedString * _title;
}

@property (nonatomic, readonly) PXAssetCollectionReference *assetCollectionReference;
@property (nonatomic, readonly) unsigned long long buttonActionType;
@property (nonatomic, readonly) NSString *buttonTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long floatingButtonActionType;
@property (nonatomic, readonly) NSString *floatingButtonTitle;
@property (nonatomic, readonly) bool floatingEnableOverview;
@property (nonatomic, readonly) NSAttributedString *floatingSummarySubtitle;
@property (nonatomic, readonly) NSAttributedString *floatingSummaryTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSAttributedString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSAttributedString *title;

- (void).cxx_destruct;
- (id)assetCollectionReference;
- (unsigned long long)buttonActionType;
- (id)buttonTitle;
- (unsigned long long)floatingButtonActionType;
- (id)floatingButtonTitle;
- (bool)floatingEnableOverview;
- (id)floatingSummarySubtitle;
- (id)floatingSummaryTitle;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 buttonTitle:(id)arg3 buttonActionType:(unsigned long long)arg4 assetCollectionReference:(id)arg5;
- (id)subtitle;
- (id)title;

@end
