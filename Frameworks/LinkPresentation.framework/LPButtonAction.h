
@interface LPButtonAction : NSObject {
    id /* block */  _handler;
    bool  _header;
    LPImage * _image;
    bool  _selected;
    NSString * _title;
    LPImage * _visibleImage;
    NSString * _visibleTitle;
}

@property (nonatomic, copy) id /* block */ handler;
@property (getter=isHeader, nonatomic) bool header;
@property (nonatomic, retain) LPImage *image;
@property (getter=isSelected, nonatomic) bool selected;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, retain) LPImage *visibleImage;
@property (nonatomic, copy) NSString *visibleTitle;

+ (id)actionWithTitle:(id)arg1 image:(id)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)handler;
- (id)image;
- (bool)isHeader;
- (bool)isSelected;
- (void)setHandler:(id /* block */)arg1;
- (void)setHeader:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setVisibleImage:(id)arg1;
- (void)setVisibleTitle:(id)arg1;
- (id)title;
- (id)visibleImage;
- (id)visibleTitle;

@end
