
@interface PKPassTileView_State : NSObject {
    PKPassTileAccessory * _accessory;
    NSAttributedString * _body;
    bool  _bodyVisible;
    bool  _buttonVisible;
    PKPassTileImage * _icon;
    UIImage * _iconImage;
    bool  _iconVisible;
    PKPassTileAccessory * _secondaryAccessory;
    UIImage * _secondaryImage;
    bool  _secondaryImageVisible;
    PKPassTile * _source;
    bool  _spinnerVisible;
    NSAttributedString * _title;
    bool  _titleVisible;
    double  _validUntil;
}

- (void).cxx_destruct;
- (id)init;

@end
