
@interface VSIKItemGroup : NSObject <IKDOMFeature, VSJSItemGroupBridge> {
    IKAppContext * _appContext;
    <VSIKItemGroupDelegate> * _delegate;
    NSString * _featureName;
    long long  _jsSelectedItem;
    long long  _selectedItemIndex;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VSIKItemGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (readonly) unsigned long long hash;
@property (setter=setJSSelectedItem:, nonatomic) long long jsSelectedItem;
@property (nonatomic) long long selectedItemIndex;
@property (readonly) Class superclass;

+ (id)makeFeatureJSObjectForFeature:(id)arg1;
+ (void)registerFeature;

- (void).cxx_destruct;
- (id)appContext;
- (id)delegate;
- (id)featureName;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (long long)jsSelectedItem;
- (long long)selectedItemIndex;
- (void)setDelegate:(id)arg1;
- (void)setJSSelectedItem:(long long)arg1;
- (void)setSelectedItemIndex:(long long)arg1;

@end
