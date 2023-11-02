
@protocol FCFetchedValueManagerObserving <NSObject>

@required

- (void)fetchedObjectManager:(id <FCFetchedValueManager>)arg1 valueDidChange:(id <NFCopying>)arg2;

@end
