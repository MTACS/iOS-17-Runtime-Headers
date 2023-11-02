
@protocol HFComparable <NSObject, NAHashable>

@required

- (HFComparisonResult *)compareToObject:(id <HFComparable>)arg1;

@end
