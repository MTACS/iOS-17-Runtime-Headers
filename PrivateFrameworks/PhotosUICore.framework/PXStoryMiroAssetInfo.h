
@interface PXStoryMiroAssetInfo : NSObject {
    NSData * _dataRepresentation;
    bool  _isUsed;
}

@property (nonatomic, readonly) NSData *dataRepresentation;
@property (nonatomic) bool isUsed;

+ (id)infoForUsedPhoto;
+ (id)infoWithData:(id)arg1;

- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)initWithData:(id)arg1;
- (bool)isUsed;
- (void)setIsUsed:(bool)arg1;

@end
