
@interface NSKeyValueMutatingArrayMethodSet : NSKeyValueMutatingCollectionMethodSet {
    struct objc_method { } * insertObjectAtIndex;
    struct objc_method { } * insertObjectsAtIndexes;
    struct objc_method { } * removeObjectAtIndex;
    struct objc_method { } * removeObjectsAtIndexes;
    struct objc_method { } * replaceObjectAtIndex;
    struct objc_method { } * replaceObjectsAtIndexes;
}

@end
