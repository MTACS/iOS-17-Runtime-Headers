
@interface _CRKCardSectionViewControllerRegistry : NSObject {
    NSMutableDictionary * _cardSectionViewControllerClassNameForCardSectionClassName;
}

- (void).cxx_destruct;
- (Class)cardSectionViewControllerClassForCardSectionClass:(Class)arg1;
- (id)init;
- (void)registerCardSectionViewControllerClass:(Class)arg1 forCardSectionClass:(Class)arg2;

@end
