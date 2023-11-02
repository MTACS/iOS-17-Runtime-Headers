
@interface PPLocalNamedEntityStoreGuardedData : NSObject {
    _PASLazyResult * _filter;
    _PASLazyResult * _mapsSearchQueryResult;
    bool  _pendingNamedEntityChangeNotification;
}

- (void).cxx_destruct;

@end
