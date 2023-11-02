
@interface PKPayLaterTileDetailRow : NSObject <PKPayLaterCollectionViewRow> {
    unsigned long long  _accessory;
    UIView * _customView;
    NSString * _detailText;
    id /* block */  _selectionHandler;
    NSString * _subtitleText;
    NSString * _text;
    NSString * _textSubtitle;
    NSString * _titleText;
}

@property (nonatomic) unsigned long long accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)accessory;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (void)handleCellSelection;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithTitleText:(id)arg1 subtitleText:(id)arg2 text:(id)arg3 detailText:(id)arg4 textSubtitle:(id)arg5 customView:(id)arg6 selectionHandler:(id /* block */)arg7;
- (bool)isEqual:(id)arg1;
- (void)setAccessory:(unsigned long long)arg1;
- (bool)shouldHighlightItem;

@end
