
@interface WFDialogListItem : NSObject <NSCopying, NSSecureCoding> {
    bool  _hasAltText;
    bool  _hasImage;
    bool  _hasSubtitle;
    bool  _hideSubtitle;
    NSString * _identifier;
    WFImage * _image;
    bool  _selected;
    <WFPropertyListObject> * _serializedPossibleState;
    bool  _showingStaticContent;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly) bool hasAltText;
@property (nonatomic, readonly) bool hasImage;
@property (nonatomic, readonly) bool hasSubtitle;
@property (nonatomic) bool hideSubtitle;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) WFImage *image;
@property (nonatomic, readonly) bool selected;
@property (nonatomic, readonly) <WFPropertyListObject> *serializedPossibleState;
@property (nonatomic, readonly) bool showingStaticContent;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, readonly) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasAltText;
- (bool)hasImage;
- (bool)hasSubtitle;
- (unsigned long long)hash;
- (bool)hideSubtitle;
- (id)identifier;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 identifier:(id)arg3 image:(id)arg4 selected:(bool)arg5 hideSubtitle:(bool)arg6 serializedPossibleState:(id)arg7;
- (bool)isEqual:(id)arg1;
- (bool)selected;
- (id)serializedPossibleState;
- (void)setHideSubtitle:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (bool)showingStaticContent;
- (id)subtitle;
- (id)title;

@end
