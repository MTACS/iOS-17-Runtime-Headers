
@interface FigWeakReference : NSObject {
    id  _referencedObject;
}

@property (readonly) id referencedObject;

+ (id)weakReferenceToObject:(id)arg1;

- (void)dealloc;
- (id)initWithReferencedObject:(id)arg1;
- (id)referencedObject;
- (id)retainReferencedObject;

@end
