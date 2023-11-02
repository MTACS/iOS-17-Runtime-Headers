
@interface _GEOTileLoaderObserverWrapper : NSObject {
    bool  _implementsFailedToLoadKey;
    bool  _implementsLoadedKeyWithSize;
    bool  _implementsLoadedKeyWithoutSize;
    <GEOTileLoaderObserver> * _observer;
}

- (void).cxx_destruct;

@end
