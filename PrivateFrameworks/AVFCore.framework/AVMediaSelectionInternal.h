
@interface AVMediaSelectionInternal : NSObject {
    AVWeakReference * assetWeakReference;
    NSArray * groupDictionaries;
    NSMutableArray * selectedMediaArray;
}

@end
