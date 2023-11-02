
@interface PKIdentityDocumentDataElement : NSObject {
    NSAttributedString * _attributedText;
    UIImage * _image;
    NSString * _localizedLabel;
    NSString * _text;
    unsigned long long  _type;
}

@property (nonatomic, readonly, copy) NSAttributedString *attributedText;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly, copy) NSString *localizedLabel;
@property (nonatomic, readonly, copy) NSString *text;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)attributedText;
- (id)image;
- (id)initWithImage:(id)arg1;
- (id)initWithLocalizedLabel:(id)arg1 attributedText:(id)arg2;
- (id)initWithLocalizedLabel:(id)arg1 text:(id)arg2;
- (id)localizedLabel;
- (id)text;
- (unsigned long long)type;

@end
