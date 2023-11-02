
@interface MusicSettingsDynamicFooterHyperlinkAction : NSObject {
    NSString * _selectorString;
    id  _target;
}

@property (nonatomic, readonly) NSString *selectorString;
@property (nonatomic, readonly) id target;

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 selectorString:(id)arg2;
- (id)selectorString;
- (id)target;

@end
