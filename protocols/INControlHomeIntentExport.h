
@protocol INControlHomeIntentExport <NSObject, JSExport>

@required

- (NSArray *)contents;
- (NSArray *)filters;
- (id)init;
- (void)setContents:(NSArray *)arg1;
- (void)setFilters:(NSArray *)arg1;
- (void)setTime:(INDateComponentsRange *)arg1;
- (void)setUserTask:(INHomeUserTask *)arg1;
- (INDateComponentsRange *)time;
- (INHomeUserTask *)userTask;

@end
