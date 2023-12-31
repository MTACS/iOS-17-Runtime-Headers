
@interface IKNavigationItem : NSObject {
    IKAppDocument * _document;
    NSDictionary * _options;
}

@property (nonatomic, retain) IKAppDocument *document;
@property (nonatomic, retain) NSDictionary *options;

- (void).cxx_destruct;
- (id)document;
- (id)initWithDocument:(id)arg1 presentationOptions:(id)arg2;
- (id)options;
- (void)setDocument:(id)arg1;
- (void)setOptions:(id)arg1;

@end
