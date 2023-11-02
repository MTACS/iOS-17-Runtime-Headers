
@interface SCNWeakPointer : NSObject {
    id  weakRef;
}

@property (nonatomic) id weakRef;

- (void).cxx_destruct;
- (id)copyWeakRef;
- (void)setWeakRef:(id)arg1;
- (id)weakRef;

@end
