
@interface TSKChangeGroup : NSObject <NSCopying> {
    NSMutableArray * mChangesArray;
}

@property (nonatomic, readonly) NSMutableArray *changesArray;

- (id)changesArray;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3;

@end
