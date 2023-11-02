
@interface SFStartPageBackgroundImageModel : NSObject {
    WBSStartPageBackgroundImagesDataSource * _dataSource;
    long long  _index;
    NSItemProvider * _itemProvider;
    NSString * _profileIdentifier;
    bool  _selected;
    NSString * _symbolName;
}

@property (nonatomic, readonly) WBSStartPageBackgroundImageDescription *imageDescription;
@property (nonatomic, readonly) bool isCustomImage;
@property (nonatomic, readonly) NSItemProvider *itemProvider;
@property (nonatomic, retain) NSString *profileIdentifier;
@property (getter=isSelected, nonatomic, readonly) bool selected;
@property (nonatomic, retain) NSString *symbolName;

- (void).cxx_destruct;
- (id)description;
- (void)getThumbnailImageWithCompletionHandler:(id /* block */)arg1;
- (unsigned long long)hash;
- (id)imageDescription;
- (id)initWithIndex:(long long)arg1 inDataSource:(id)arg2 selected:(bool)arg3;
- (id)initWithItemProvider:(id)arg1;
- (id)initWithItemProvider:(id)arg1 symbolName:(id)arg2 profileIdentifier:(id)arg3 selected:(bool)arg4;
- (bool)isCustomImage;
- (bool)isEqual:(id)arg1;
- (bool)isSelected;
- (id)itemProvider;
- (id)profileIdentifier;
- (void)setProfileIdentifier:(id)arg1;
- (void)setSymbolName:(id)arg1;
- (id)symbolName;

@end
