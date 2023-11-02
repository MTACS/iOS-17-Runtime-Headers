
@interface AVTStickerRecentsLayout : NSObject {
    long long  _appButtonIndex;
    long long  _interitemPadding;
    bool  _laysOutVertically;
    long long  _numberOfItems;
    long long  _numberOfItemsPerColumn;
    long long  _numberOfItemsPerRow;
}

@property (nonatomic, readonly) long long appButtonIndex;
@property (nonatomic, readonly) long long interitemPadding;
@property (nonatomic, readonly) bool laysOutVertically;
@property (nonatomic, readonly) long long numberOfItems;
@property (nonatomic, readonly) long long numberOfItemsPerColumn;
@property (nonatomic, readonly) long long numberOfItemsPerRow;

+ (struct CGSize { double x1; double x2; })buttonSizeForContainerSize:(struct CGSize { double x1; double x2; })arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;

- (long long)appButtonIndex;
- (unsigned long long)hash;
- (id)initWithNumberOfItemsPerRow:(long long)arg1 numberOfItemsPerColumn:(long long)arg2 interitemPadding:(double)arg3 appButtonIndex:(long long)arg4 laysOutVertically:(bool)arg5;
- (long long)interitemPadding;
- (bool)isEqual:(id)arg1;
- (bool)laysOutVertically;
- (long long)numberOfItems;
- (long long)numberOfItemsPerColumn;
- (long long)numberOfItemsPerRow;

@end
