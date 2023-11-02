
@interface MUPlaceExternalActionMenuHelper : NSObject {
    <MUExternalActionHandling> * _actionHandler;
    MUTimeExpirableLRUCache * _iconCache;
    bool  _isQuickAction;
    NSMutableDictionary * _lockupImagesByIdentifiers;
    NSArray * _partnerActionMenuElements;
    MUGroupedExternalActionController * _resolver;
}

@property (nonatomic, readonly) MUGroupedExternalActionController *actionController;
@property (nonatomic, readonly) NSString *actionName;
@property (nonatomic) bool isQuickAction;
@property (nonatomic, readonly) NSString *symbolName;

- (void).cxx_destruct;
- (id)_buildMenuElementForViewModel:(id)arg1 presentationOptions:(id)arg2 isSingleProvider:(bool)arg3;
- (void)_downloadImageWithURL:(id)arg1 variant:(unsigned long long)arg2 uniqueIdentifier:(id)arg3 completion:(id /* block */)arg4;
- (id)actionController;
- (id)actionName;
- (id)buildMenuElementsWithPresentationOptions:(id)arg1;
- (id)initWithExternalActionController:(id)arg1 iconCache:(id)arg2;
- (bool)isQuickAction;
- (void)setIsQuickAction:(bool)arg1;
- (id)symbolName;

@end
