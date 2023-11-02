
@interface _MFSatisfiedActivityCondition : NSObject <MFActivityCondition>

@property (nonatomic, readonly) EFObservable *conditionsObservable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isSatisfied, nonatomic, readonly) bool satisfied;
@property (readonly) Class superclass;

- (id)conditionsObservable;
- (bool)isSatisfied;

@end
