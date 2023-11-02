
@interface SFUnifiedBarContentArrangement : NSObject {
    UIView<SFUnifiedBarContentView> * _inlineContentView;
    NSArray * _standaloneContentViews;
}

@property (nonatomic, readonly, copy) NSArray *allContentViews;
@property (nonatomic, readonly) UIView<SFUnifiedBarContentView> *inlineContentView;
@property (nonatomic, readonly, copy) NSArray *standaloneContentViews;

- (void).cxx_destruct;
- (id)allContentViews;
- (id)init;
- (id)initWithInlineContentView:(id)arg1 standaloneContentViews:(id)arg2;
- (id)inlineContentView;
- (bool)isEqual:(id)arg1;
- (id)standaloneContentViews;

@end
