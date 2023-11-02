
@interface CACLabeledElementsCollection : NSObject <NSCopying> {
    bool  _areElementsNumbered;
    NSArray * _axElements;
    double  _cachedCollectionTransactionID;
    NSMutableDictionary * _cachedElementsByTitle;
    NSMutableDictionary * _cachedElementsByTrait;
    NSMutableArray * _cachedElementsSorted;
    double  _currentCollectionTransactionID;
    double  _finishedTime;
}

@property bool areElementsNumbered;
@property (retain) NSArray *axElements;
@property (readonly) double cachedCollectionTransactionID;
@property (readonly) double finishedTime;

+ (id)_elementActionManager;
+ (bool)canShowElementActionsForElement:(id)arg1;
+ (id)labeledElementsFromTextMarkerRanges:(id)arg1 axElement:(id)arg2;

- (void).cxx_destruct;
- (id)_initWithCollection:(id)arg1;
- (id)_keyFromTrait:(unsigned long long)arg1;
- (void)addLabeledElementWithItemElement:(id)arg1 elementsByTitle:(id)arg2 elementsByTrait:(id)arg3 elementsSorted:(id)arg4;
- (bool)areElementsNumbered;
- (id)axElements;
- (double)cachedCollectionTransactionID;
- (void)cancelCollecting;
- (id)collectedElements;
- (id)collectedElementsWithTitle:(id)arg1;
- (id)collectedElementsWithTrait:(unsigned long long)arg1;
- (unsigned long long)collectionCount;
- (id)copyListOfCollectedElementsSorted;
- (id)copyTableOfCollectedElementsByTitle;
- (id)copyTableOfCollectedElementsByTrait;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)finishedTime;
- (void)flushCollection;
- (id)init;
- (bool)isCollecting;
- (bool)isEmpty;
- (id)newlyCollectedElements;
- (void)resetCollectedFlagForAllElements;
- (void)setAreElementsNumbered:(bool)arg1;
- (void)setAxElements:(id)arg1;
- (void)updateWithAXElements:(id)arg1;

@end
