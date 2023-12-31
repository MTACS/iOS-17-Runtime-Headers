
@interface CTCellularPlanDateParser : NSObject <CTCellularPlanValidating>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)validate:(id)arg1;
+ (bool)validate:(id)arg1 parseTo:(double*)arg2;

@end
