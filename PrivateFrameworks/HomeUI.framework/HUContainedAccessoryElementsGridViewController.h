
@interface HUContainedAccessoryElementsGridViewController : HUControllableItemCollectionViewController <HUCollectionLayoutManagerDelegate, HUDetailsPresentationDelegateHost> {
    void $__lazy_storage_$_collectionLayoutManager;
    void actionSetDataModel;
    void cellBackgroundDisplayStyle;
    void cellInsetsLayoutMarginsFromSafeArea;
    void dataModelObservationCancelable;
    void isPresentedModally;
    void mediaItem;
    void presentationDelegate;
    void requiresPresentingViewControllerDismissal;
    void serviceContainingItem;
    void serviceGridDelegate;
    void shouldGroupByRoom;
    void showTilePrefixes;
}

@property (nonatomic, retain) HFMediaAccessoryItem *mediaItem;
@property (nonatomic, retain) <HUPresentationDelegate> *presentationDelegate;
@property (nonatomic) bool requiresPresentingViewControllerDismissal;
@property (nonatomic, retain) HFItem<HUServiceContainerItem><NSCopying> *serviceContainingItem;
@property (nonatomic) <HUContainedAccessoryElementsGridViewControllerDelegate> *serviceGridDelegate;

- (void).cxx_destruct;
- (void)accessoryControlViewControllerFor:(void *)arg1 tileItem:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 103: id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void*, BOOL, BOOL, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, short, out const /* Warning: Unrecognized filer type: 'y' using 'void*' */ void*, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'p' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: unhandled bit fieldencoding: 'b' */ unsigned int, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const void, int, BOOL, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned long, int, /* Warning: Unrecognized filer type: 'k' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'F' using 'void*' */ void*, unsigned int, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'm' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, unsigned int, oneway int, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'w' using 'void*' */ void*, unsigned char, out in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, const out long, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, const /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'U' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'P' using 'void*' */ void*, const /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, short, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, in /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, int, out in long double, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, long, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'g' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'e' using 'void*' */ void*, /* Warning: Unrecognized filer type: 'H' using 'void*' */ void*, out short, /* Warning: Unrecognized filer type: 't' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*, /* Warning: Unrecognized filer type: '"' using 'void*' */ void*, /* Warning: Unrecognized filer type: '>' using 'void*' */ void*
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)configureCell:(id)arg1 forItem:(id)arg2;
- (id)detailsViewControllerForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)displayedItemsInSection:(id)arg1;
- (void)doneWithSender:(id)arg1;
- (void)editWithSender:(id)arg1;
- (id)finishPresentation:(id)arg1 animated:(bool)arg2;
- (bool)hasDetailsActionForPresentationCoordinator:(id)arg1 item:(id)arg2;
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (id)initWithMediaItem:(id)arg1 isPresentedModally:(bool)arg2 shouldGroupByRoom:(bool)arg3 valueSource:(id)arg4;
- (id)initWithServiceContainingItem:(id)arg1 isPresentedModally:(bool)arg2 shouldGroupByRoom:(bool)arg3 valueSource:(id)arg4;
- (id)initWithServiceContainingItem:(id)arg1 mediaItem:(id)arg2 isPresentedModally:(bool)arg3 shouldGroupByRoom:(bool)arg4 valueSource:(id)arg5;
- (void)itemManagerDidUpdate:(id)arg1;
- (id)layoutSectionForSection:(long long)arg1 layoutEnvironment:(id)arg2;
- (id)mediaItem;
- (id)presentationDelegate;
- (bool)requiresPresentingViewControllerDismissal;
- (id)serviceContainingItem;
- (id)serviceGridDelegate;
- (void)setMediaItem:(id)arg1;
- (void)setPresentationDelegate:(id)arg1;
- (void)setRequiresPresentingViewControllerDismissal:(bool)arg1;
- (void)setServiceContainingItem:(id)arg1;
- (void)setServiceGridDelegate:(id)arg1;
- (bool)shouldShowHeaderForSection:(id)arg1;
- (void)viewDidLoad;

@end
