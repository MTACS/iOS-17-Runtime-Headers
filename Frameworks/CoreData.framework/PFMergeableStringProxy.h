
@interface PFMergeableStringProxy : NSObject <NSMergeableTransformableStringAttributeValue> {
    NSManagedObject * _container;
    NSString * _key;
    NSObject<NSMergeableTransformableStringAttributeValue> * _mergeableString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsMergeableTransformable;

- (void)appendString:(id)arg1;
- (id)computedValue;
- (void)dealloc;
- (id)init;
- (id)initWithContainer:(id)arg1 key:(id)arg2 mergeableString:(id)arg3;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)merge:(id)arg1;
- (void)removeSubrange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)replaceSubrange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withString:(id)arg2;
- (void)setString:(id)arg1;

@end
