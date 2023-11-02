
@interface PXStoryStyleSelectionDataSource : NSObject {
    long long  _indexOfCurrentStyle;
    long long  _indexOfCustomStyle;
    NSArray * _styleInfos;
}

@property (nonatomic, readonly) long long indexOfCurrentStyle;
@property (nonatomic, readonly) long long indexOfCustomStyle;
@property (nonatomic, readonly) long long numberOfStyles;
@property (nonatomic, readonly) <PXStoryStyleDescriptor> *styleInfoForCurrentStyle;
@property (nonatomic, readonly, copy) NSArray *styleInfos;

- (void).cxx_destruct;
- (long long)indexOfCurrentStyle;
- (long long)indexOfCustomStyle;
- (id)infosForStylesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)init;
- (id)initWithStyleInfos:(id)arg1 indexOfCurrentStyle:(long long)arg2 indexOfCustomStyle:(long long)arg3;
- (bool)isEqual:(id)arg1;
- (long long)numberOfStyles;
- (id)songForStyleAtIndex:(long long)arg1;
- (id)styleInfoAtIndex:(long long)arg1;
- (id)styleInfoForCurrentStyle;
- (id)styleInfos;

@end
