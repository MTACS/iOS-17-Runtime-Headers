
@protocol MFActivityCondition <NSObject>

@required

- (EFObservable *)conditionsObservable;
- (bool)isSatisfied;

@end
