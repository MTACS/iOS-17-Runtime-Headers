
@interface HMObjectMergePair : NSObject {
    <HMObjectMerge> * _oldObject;
    <HMObjectMerge> * _updatedObject;
}

@property (readonly) <HMObjectMerge> *oldObject;
@property (readonly) <HMObjectMerge> *updatedObject;

- (void).cxx_destruct;
- (id)initWithOldObject:(id)arg1 updatedObject:(id)arg2;
- (id)oldObject;
- (id)updatedObject;

@end
