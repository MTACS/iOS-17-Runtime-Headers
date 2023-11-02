
@protocol SearchUIRowModelViewDelegate <NSObject>

@required

- (void)scrollRowModelToVisible:(SearchUIRowModel *)arg1;
- (UIView *)viewForRowModel:(SearchUIRowModel *)arg1;

@end
