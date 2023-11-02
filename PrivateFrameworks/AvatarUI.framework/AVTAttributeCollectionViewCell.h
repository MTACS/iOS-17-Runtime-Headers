
@interface AVTAttributeCollectionViewCell : UICollectionViewCell <AVTDiscardableContent> {
    UIView * _attributeView;
    id /* block */  discardableContentHandler;
}

@property (nonatomic, retain) UIView *attributeView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ discardableContentHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) AVTAttributeValueView *valueView;

+ (id)cellIdentifier;

- (void).cxx_destruct;
- (id)attributeView;
- (void)discardContent;
- (id /* block */)discardableContentHandler;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForAttributeView;
- (void)prepareForReuse;
- (void)setAttributeView:(id)arg1;
- (void)setDiscardableContentHandler:(id /* block */)arg1;
- (id)valueView;

@end
