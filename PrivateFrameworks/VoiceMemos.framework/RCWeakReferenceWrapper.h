
@interface RCWeakReferenceWrapper : NSObject {
    id  _weakReference;
}

@property (nonatomic) id weakReference;

+ (id)withReference:(id)arg1;

- (void).cxx_destruct;
- (void)setWeakReference:(id)arg1;
- (id)weakReference;

@end
