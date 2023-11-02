
@interface _CRKCardSectionViewControllerFactory : NSObject {
    _CRKCardSectionViewControllerRegistry * _registry;
}

+ (id)_sharedInstance;
+ (id)cardSectionViewControllerForCardSection:(id)arg1;
+ (void)registerCardSectionViewControllerClass:(Class)arg1;

- (void).cxx_destruct;
- (id)_cardSectionViewControllerForCardSection:(id)arg1;
- (void)_registerCardSectionViewControllerClass:(Class)arg1;
- (id)init;

@end
