
@interface GQHPagesWPFloatingTable : NSObject <GQTableGenerator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)beginCells:(id)arg1 state:(id)arg2;
+ (int)beginTable:(id)arg1 state:(id)arg2;
+ (int)endCells:(id)arg1 state:(id)arg2;
+ (int)endTable:(id)arg1 state:(id)arg2;
+ (int)handleCell:(id)arg1 state:(id)arg2;

@end
