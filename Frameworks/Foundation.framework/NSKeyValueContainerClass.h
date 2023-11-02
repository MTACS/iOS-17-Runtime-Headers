
@interface NSKeyValueContainerClass : NSObject {
    int (* _cachedObservationInfoImplementation;
    int (* _cachedSetObservationInfoImplementation;
    bool  _cachedSetObservationInfoTakesAnObject;
    struct { Class x1; Class x2; struct __CFSet {} *x3; struct __CFDictionary {} *x4; struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int x_1_2_1; } x_5_1_1; unsigned int x_5_1_2; } x5; bool x6; } * _notifyingInfo;
    Class  _originalClass;
}

- (id)description;
- (id)initWithOriginalClass:(Class)arg1;

@end
