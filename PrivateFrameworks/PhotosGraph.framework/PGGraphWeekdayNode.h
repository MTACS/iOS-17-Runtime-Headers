
@interface PGGraphWeekdayNode : PGGraphPartOfWeekNode

@property (nonatomic, readonly) PGGraphWeekdayNodeCollection *collection;

+ (id)filter;

- (id)collection;
- (id)init;
- (id)initWithLabel:(id)arg1 domain:(unsigned short)arg2 properties:(id)arg3;
- (id)label;

@end
