
@interface SUUICollectionDOMFeature : NSObject <SUUIDOMFeature, SUUIJSDOMFeatureCollectionAppBridge> {
    IKAppContext * _appContext;
    <SUUICollectionDOMFeatureTargetting> * _collectionTarget;
    NSString * _featureName;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (nonatomic) <SUUICollectionDOMFeatureTargetting> *collectionTarget;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)featureName;
+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (void).cxx_destruct;
- (id)appContext;
- (id)collectionTarget;
- (id)featureName;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (void)setCollectionTarget:(id)arg1;
- (void)setEditing:(bool)arg1 options:(id)arg2;

@end
