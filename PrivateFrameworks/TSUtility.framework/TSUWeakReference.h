
@interface TSUWeakReference : NSObject {
    id  mObject;
}

@property (nonatomic, readonly) id object;

+ (id)weakReferenceWithObject:(id)arg1;

- (void)dealloc;
- (id)init;
- (id)initWithObject:(id)arg1;
- (id)object;

@end
