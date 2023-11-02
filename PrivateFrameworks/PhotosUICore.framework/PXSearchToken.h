
@interface PXSearchToken : NSObject {
    NSAttributedString * _attributedText;
    UIImage * _image;
    PXSearchTokenRepresentedObject * _representedObject;
    UISearchToken * _searchObject;
    NSString * _text;
}

@property (nonatomic, copy) NSAttributedString *attributedText;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) PXSearchTokenRepresentedObject *representedObject;
@property (nonatomic, retain) UISearchToken *searchObject;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (id)attributedText;
- (id)image;
- (id)initWithAttributedText:(id)arg1 searchObject:(id)arg2 representedObject:(id)arg3;
- (id)initWithText:(id)arg1 image:(id)arg2 representedObject:(id)arg3;
- (id)initWithText:(id)arg1 searchObject:(id)arg2 representedObject:(id)arg3;
- (id)representedObject;
- (id)searchObject;
- (void)setAttributedText:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setSearchObject:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (id)textValue;

@end
