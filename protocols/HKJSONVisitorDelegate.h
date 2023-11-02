
@protocol HKJSONVisitorDelegate <NSObject>

@optional

- (long long)visitor:(HKJSONVisitor *)arg1 didVisitArray:(NSArray *)arg2;
- (long long)visitor:(HKJSONVisitor *)arg1 didVisitDictionary:(NSDictionary *)arg2;
- (long long)visitor:(HKJSONVisitor *)arg1 visitPrimitive:(id)arg2;
- (long long)visitor:(HKJSONVisitor *)arg1 willVisitArray:(NSArray *)arg2;
- (long long)visitor:(HKJSONVisitor *)arg1 willVisitDictionary:(NSDictionary *)arg2;

@end
