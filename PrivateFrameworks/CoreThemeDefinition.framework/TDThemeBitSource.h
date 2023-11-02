
@interface TDThemeBitSource : NSManagedObject

@property (nonatomic, retain) NSSet *assets;
@property (nonatomic, retain) NSString *path;

- (id)fileURLWithDocument:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;

@end
