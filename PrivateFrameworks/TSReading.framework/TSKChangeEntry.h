
@interface TSKChangeEntry : NSObject {
    id  mChangeSource;
    NSMutableArray * mChanges;
}

@property (nonatomic, readonly) id changeSource;
@property (nonatomic, readonly) NSMutableArray *changes;

- (id)changeSource;
- (id)changes;
- (void)dealloc;
- (id)initWithChangeSource:(id)arg1 changes:(id)arg2;

@end
