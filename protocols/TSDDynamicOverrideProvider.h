
@protocol TSDDynamicOverrideProvider <NSObject>

@required

- (NSObject *)dynamicOverrideForLayout:(TSDLayout *)arg1;
- (NSObject *)dynamicOverrideForRep:(TSDRep *)arg1;

@end
