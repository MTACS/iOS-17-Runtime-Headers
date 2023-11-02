
@protocol INShowHomeIntentExport <NSObject, JSExport>

@required

- (NSArray *)filters;
- (id)init;
- (void)setFilters:(NSArray *)arg1;
- (void)setTime:(INDateComponentsRange *)arg1;
- (INDateComponentsRange *)time;

@end
