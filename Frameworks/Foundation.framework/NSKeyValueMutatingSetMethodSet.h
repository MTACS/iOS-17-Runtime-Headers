
@interface NSKeyValueMutatingSetMethodSet : NSKeyValueMutatingCollectionMethodSet {
    struct objc_method { } * addObject;
    struct objc_method { } * intersectSet;
    struct objc_method { } * minusSet;
    struct objc_method { } * removeObject;
    struct objc_method { } * setSet;
    struct objc_method { } * unionSet;
}

@end
