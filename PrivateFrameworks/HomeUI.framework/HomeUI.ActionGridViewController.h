
@interface HomeUI.ActionGridViewController : HUControllableItemCollectionViewController {
    void accessoryControlDataModel;
    void actionGridConfig;
    void actionGridModule;
    void actionGridModuleController;
    void dataModelObserverCancelable;
    void delegate;
}

@property (nonatomic, copy) NSArray *allowlistedAccessories;
@property (nonatomic) bool allowsEditing;
@property (nonatomic, readonly) bool controlsWantSystemPresentationAnimations;
@property (nonatomic, copy) NSArray *denylistedAccessories;

+ (unsigned long long)updateMode;

- (void).cxx_destruct;
- (void)accessoryControlViewControllerFor:(void *)arg1 tileItem:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 103: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, BOOL, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, short, out const /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: unhandled bit fieldencoding: 'b' */ unsigned int, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const void, int, BOOL, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned long, int, /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, unsigned int, oneway int, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'w' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const out long, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in long double, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, out short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (id)allowlistedAccessories;
- (bool)allowsEditing;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (void)configureWithAccessoryControlViewController:(id)arg1;
- (bool)controlsWantSystemPresentationAnimations;
- (id)denylistedAccessories;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (bool)presentationCoordinator:(id)arg1 shouldBeginInteractivePresentationWithTouchLocation:(struct CGPoint { double x1; double x2; })arg2 view:(id)arg3;
- (bool)presentationCoordinator:(id)arg1 shouldBeginLongPressPresentationWithContext:(id)arg2;
- (bool)presentationCoordinator:(id)arg1 shouldBeginPresentationWithContext:(id)arg2;
- (void)setAllowlistedAccessories:(id)arg1;
- (void)setAllowsEditing:(bool)arg1;
- (void)setDenylistedAccessories:(id)arg1;
- (id)tappableAreaForPoint:(struct CGPoint { double x1; double x2; })arg1 inItem:(id)arg2 atIndexPath:(id)arg3;
- (void)willDismissWithViewController:(id)arg1;

@end
