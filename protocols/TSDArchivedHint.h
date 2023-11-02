
@protocol TSDArchivedHint <NSObject>

@required

- (<TSDHint> *)hint;
- (id)initWithContext:(TSPObjectContext *)arg1 hint:(id <TSDHint>)arg2;
- (void)setHint:(id <TSDHint>)arg1;

@end
