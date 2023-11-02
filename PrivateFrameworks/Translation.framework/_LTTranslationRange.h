
@interface _LTTranslationRange : NSObject {
    NSString * _identifier;
    NSDictionary * _metaInfo;
    bool  _shouldTranslate;
    NSString * _text;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *metaInfo;
@property (nonatomic, readonly) bool shouldTranslate;
@property (nonatomic, readonly, copy) NSString *text;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 text:(id)arg2 shouldTranslate:(bool)arg3;
- (id)metaInfo;
- (void)setMetaInfo:(id)arg1;
- (bool)shouldTranslate;
- (id)text;

@end
